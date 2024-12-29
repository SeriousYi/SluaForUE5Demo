// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaDelegate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaDelegate();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaDelegate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ULuaDelegate::execEventTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EventTrigger();
		P_NATIVE_END;
	}
	void ULuaDelegate::StaticRegisterNativesULuaDelegate()
	{
		UClass* Class = ULuaDelegate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventTrigger", &ULuaDelegate::execEventTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lua|Delegate" },
		{ "ModuleRelativePath", "Public/LuaDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaDelegate, nullptr, "EventTrigger", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULuaDelegate_EventTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaDelegate_EventTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuaDelegate);
	UClass* Z_Construct_UClass_ULuaDelegate_NoRegister()
	{
		return ULuaDelegate::StaticClass();
	}
	struct Z_Construct_UClass_ULuaDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaDelegate_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaDelegate_EventTrigger, "EventTrigger" }, // 2614973131
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaDelegate_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaDelegate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaDelegate.h" },
		{ "ModuleRelativePath", "Public/LuaDelegate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaDelegate_Statics::ClassParams = {
		&ULuaDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaDelegate_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaDelegate_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULuaDelegate()
	{
		if (!Z_Registration_Info_UClass_ULuaDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaDelegate.OuterSingleton, Z_Construct_UClass_ULuaDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULuaDelegate.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaDelegate>()
	{
		return ULuaDelegate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaDelegate);
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULuaDelegate, ULuaDelegate::StaticClass, TEXT("ULuaDelegate"), &Z_Registration_Info_UClass_ULuaDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaDelegate), 4214587889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_1427373778(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaDelegate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
