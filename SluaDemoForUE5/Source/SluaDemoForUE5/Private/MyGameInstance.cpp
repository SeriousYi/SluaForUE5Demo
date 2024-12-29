// Fill out your copyright notice in the Description page of Project Settings.


#include "SluaDemoForUE5/Public/MyGameInstance.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFileManager.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "Misc/FileHelper.h"


// read file content
static uint8* ReadFile(IPlatformFile& PlatformFile, FString path, uint32& len) {
	IFileHandle* FileHandle = PlatformFile.OpenRead(*path);
	if (FileHandle) {
		len = (uint32)FileHandle->Size();
		uint8* buf = new uint8[len];

		FileHandle->Read(buf, len);

		// Close the file again
		delete FileHandle;

		return buf;
	}

	return nullptr;
}

UMyGameInstance::UMyGameInstance() : state(nullptr)
{
	// 排除 CDO 模版
	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		// 创建Lua对象（解释器+虚拟机）
		CreateLuaState();
	}
}

void UMyGameInstance::CreateLuaState()
{
	// 绑定初始化之后的回调
    NS_SLUA::LuaState::onInitEvent.AddUObject(this, &UMyGameInstance::LuaStateInitCallback);

	// 清理残留lua实例
	CloseLuaState();

	// 实例化 luastate
	state = new NS_SLUA::LuaState("SLuaMainState", this);


	// Editor模式下是OK。但，默认打包发布，是不会带上`Content/Lua`路径（只会cook .uasset进pak包），游戏会读不到Lua脚本。
	state->setLoadFileDelegate([](const char* fn, FString& filepath)->TArray<uint8> {
		// 平台文件
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		// Content
		FString path = FPaths::ProjectContentDir();
		FString filename = UTF8_TO_TCHAR(fn);
		// Content/Lua
		path /= "Lua";
		// Content.Lua
		path /= filename.Replace(TEXT("."), TEXT("/"));

		TArray<uint8> Content;
		TArray<FString> luaExts = { UTF8_TO_TCHAR(".lua"), UTF8_TO_TCHAR(".luac") };
		for (auto& it : luaExts) {
			auto fullPath = path + *it;

			FFileHelper::LoadFileToArray(Content, *fullPath);
			if (Content.Num() > 0) {
				filepath = fullPath;
				return MoveTemp(Content);
			}
		}

		return MoveTemp(Content);
	});

	// 初始化 init 环境
	state->init();
}

// 关闭lua实例
void UMyGameInstance::CloseLuaState()
{
    if (state)
    {
    	state->close();
		delete state;
        state = nullptr;
    }
	
}

void UMyGameInstance::Init()
{
	Super::Init();
}

void UMyGameInstance::Shutdown()
{
	CloseLuaState();

	Super::Shutdown();
}

// 在lua侧设置 全局函数 PrintLog
static int32 PrintLog(NS_SLUA::lua_State *L)
{
	FString str;
	size_t len;
	const char* s = luaL_tolstring(L, 1, &len);
	if (s) str += UTF8_TO_TCHAR(s);
	NS_SLUA::Log::Log("PrintLog %s", TCHAR_TO_UTF8(*str));
	return 0;
}

// lua 实例创建成功的回调
void UMyGameInstance::LuaStateInitCallback(NS_SLUA::lua_State* L)
{
	lua_pushcfunction(L, PrintLog);
	lua_setglobal(L, "PrintLog");
}
