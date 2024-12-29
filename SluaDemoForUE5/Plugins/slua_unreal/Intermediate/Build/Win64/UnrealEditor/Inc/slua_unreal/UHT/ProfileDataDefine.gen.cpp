// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/ProfileDataDefine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileDataDefine() {}
// Cross Module References
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FileMemInfo();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaFunctionDefine();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FunctionProfileCallInfo();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FunctionProfileNode();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ileMemInfo;
class UScriptStruct* FileMemInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ileMemInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ileMemInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FileMemInfo, (UObject*)Z_Construct_UPackage__Script_slua_unreal(), TEXT("ileMemInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ileMemInfo.OuterSingleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FileMemInfo>()
{
	return FileMemInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FileMemInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileNameIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_fileNameIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_lineNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_difference_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_difference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FileMemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FileMemInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex = { "fileNameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileMemInfo, fileNameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex_MetaData), Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber = { "lineNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileMemInfo, lineNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber_MetaData), Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileMemInfo, size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size_MetaData), Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// one line memory difference between two point\n" },
#endif
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "one line memory difference between two point" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference = { "difference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FileMemInfo, difference), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference_MetaData), Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FileMemInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_fileNameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_lineNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FileMemInfo_Statics::NewProp_difference,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FileMemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"ileMemInfo",
		Z_Construct_UScriptStruct_FileMemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::PropPointers),
		sizeof(FileMemInfo),
		alignof(FileMemInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FileMemInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FileMemInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FileMemInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ileMemInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ileMemInfo.InnerSingleton, Z_Construct_UScriptStruct_FileMemInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ileMemInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LuaFunctionDefine;
class UScriptStruct* FLuaFunctionDefine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LuaFunctionDefine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LuaFunctionDefine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuaFunctionDefine, (UObject*)Z_Construct_UPackage__Script_slua_unreal(), TEXT("LuaFunctionDefine"));
	}
	return Z_Registration_Info_UScriptStruct_LuaFunctionDefine.OuterSingleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FLuaFunctionDefine>()
{
	return FLuaFunctionDefine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fileNameIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_fileNameIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_functionNameIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_functionNameIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineDefined_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_lineDefined;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuaFunctionDefine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex = { "fileNameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLuaFunctionDefine, fileNameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex_MetaData), Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex = { "functionNameIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLuaFunctionDefine, functionNameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex_MetaData), Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined = { "lineDefined", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLuaFunctionDefine, lineDefined), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined_MetaData), Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_fileNameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_functionNameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewProp_lineDefined,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"LuaFunctionDefine",
		Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::PropPointers),
		sizeof(FLuaFunctionDefine),
		alignof(FLuaFunctionDefine),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLuaFunctionDefine()
	{
		if (!Z_Registration_Info_UScriptStruct_LuaFunctionDefine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LuaFunctionDefine.InnerSingleton, Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LuaFunctionDefine.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_unctionProfileNode;
class UScriptStruct* FunctionProfileNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_unctionProfileNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_unctionProfileNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FunctionProfileNode, (UObject*)Z_Construct_UPackage__Script_slua_unreal(), TEXT("unctionProfileNode"));
	}
	return Z_Registration_Info_UScriptStruct_unctionProfileNode.OuterSingleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FunctionProfileNode>()
{
	return FunctionProfileNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FunctionProfileNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_functionDefine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_functionDefine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_costTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_costTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_countOfCalls_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_countOfCalls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_layerIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_layerIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FunctionProfileNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine = { "functionDefine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionProfileNode, functionDefine), Z_Construct_UScriptStruct_FLuaFunctionDefine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine_MetaData), Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine_MetaData) }; // 3591988194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime = { "costTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionProfileNode, costTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime_MetaData), Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls = { "countOfCalls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionProfileNode, countOfCalls), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls_MetaData), Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx = { "layerIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionProfileNode, layerIdx), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx_MetaData), Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FunctionProfileNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_functionDefine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_costTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_countOfCalls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewProp_layerIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FunctionProfileNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"unctionProfileNode",
		Z_Construct_UScriptStruct_FunctionProfileNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::PropPointers),
		sizeof(FunctionProfileNode),
		alignof(FunctionProfileNode),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FunctionProfileNode_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileNode_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FunctionProfileNode()
	{
		if (!Z_Registration_Info_UScriptStruct_unctionProfileNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_unctionProfileNode.InnerSingleton, Z_Construct_UScriptStruct_FunctionProfileNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_unctionProfileNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_unctionProfileCallInfo;
class UScriptStruct* FunctionProfileCallInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_unctionProfileCallInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_unctionProfileCallInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FunctionProfileCallInfo, (UObject*)Z_Construct_UPackage__Script_slua_unreal(), TEXT("unctionProfileCallInfo"));
	}
	return Z_Registration_Info_UScriptStruct_unctionProfileCallInfo.OuterSingleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FunctionProfileCallInfo>()
{
	return FunctionProfileCallInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_functionDefine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_functionDefine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_begTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_begTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCoroutineBegin_MetaData[];
#endif
		static void NewProp_bIsCoroutineBegin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCoroutineBegin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FunctionProfileCallInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine = { "functionDefine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionProfileCallInfo, functionDefine), Z_Construct_UScriptStruct_FLuaFunctionDefine, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine_MetaData), Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine_MetaData) }; // 3591988194
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime = { "begTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionProfileCallInfo, begTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime_MetaData), Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileDataDefine.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_SetBit(void* Obj)
	{
		((FunctionProfileCallInfo*)Obj)->bIsCoroutineBegin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin = { "bIsCoroutineBegin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionProfileCallInfo), &Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_MetaData), Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_functionDefine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_begTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewProp_bIsCoroutineBegin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"unctionProfileCallInfo",
		Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::PropPointers),
		sizeof(FunctionProfileCallInfo),
		alignof(FunctionProfileCallInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FunctionProfileCallInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_unctionProfileCallInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_unctionProfileCallInfo.InnerSingleton, Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_unctionProfileCallInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_ProfileDataDefine_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_ProfileDataDefine_h_Statics::ScriptStructInfo[] = {
		{ FileMemInfo::StaticStruct, Z_Construct_UScriptStruct_FileMemInfo_Statics::NewStructOps, TEXT("ileMemInfo"), &Z_Registration_Info_UScriptStruct_ileMemInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FileMemInfo), 678714303U) },
		{ FLuaFunctionDefine::StaticStruct, Z_Construct_UScriptStruct_FLuaFunctionDefine_Statics::NewStructOps, TEXT("LuaFunctionDefine"), &Z_Registration_Info_UScriptStruct_LuaFunctionDefine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLuaFunctionDefine), 3591988194U) },
		{ FunctionProfileNode::StaticStruct, Z_Construct_UScriptStruct_FunctionProfileNode_Statics::NewStructOps, TEXT("unctionProfileNode"), &Z_Registration_Info_UScriptStruct_unctionProfileNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FunctionProfileNode), 1017474805U) },
		{ FunctionProfileCallInfo::StaticStruct, Z_Construct_UScriptStruct_FunctionProfileCallInfo_Statics::NewStructOps, TEXT("unctionProfileCallInfo"), &Z_Registration_Info_UScriptStruct_unctionProfileCallInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FunctionProfileCallInfo), 596770394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_ProfileDataDefine_h_3604367685(TEXT("/Script/slua_unreal"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_ProfileDataDefine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_ProfileDataDefine_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
