// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaLevelScriptActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaLevelScriptActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaLevelScriptActor();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaLevelScriptActor_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ALuaLevelScriptActor::execUnRegistLuaTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegistLuaTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALuaLevelScriptActor::execRegistLuaTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistLuaTick(Z_Param_TickInterval);
		P_NATIVE_END;
	}
	void ALuaLevelScriptActor::StaticRegisterNativesALuaLevelScriptActor()
	{
		UClass* Class = ALuaLevelScriptActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegistLuaTick", &ALuaLevelScriptActor::execRegistLuaTick },
			{ "UnRegistLuaTick", &ALuaLevelScriptActor::execUnRegistLuaTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics
	{
		struct LuaLevelScriptActor_eventRegistLuaTick_Parms
		{
			float TickInterval;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaLevelScriptActor_eventRegistLuaTick_Parms, TickInterval), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::NewProp_TickInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaLevelScriptActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaLevelScriptActor, nullptr, "RegistLuaTick", nullptr, nullptr, Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::LuaLevelScriptActor_eventRegistLuaTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::LuaLevelScriptActor_eventRegistLuaTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALuaLevelScriptActor_UnRegistLuaTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaLevelScriptActor_UnRegistLuaTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaLevelScriptActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaLevelScriptActor_UnRegistLuaTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaLevelScriptActor, nullptr, "UnRegistLuaTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaLevelScriptActor_UnRegistLuaTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALuaLevelScriptActor_UnRegistLuaTick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALuaLevelScriptActor_UnRegistLuaTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALuaLevelScriptActor_UnRegistLuaTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALuaLevelScriptActor);
	UClass* Z_Construct_UClass_ALuaLevelScriptActor_NoRegister()
	{
		return ALuaLevelScriptActor::StaticClass();
	}
	struct Z_Construct_UClass_ALuaLevelScriptActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuaFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LuaFilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALuaLevelScriptActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaLevelScriptActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaLevelScriptActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaLevelScriptActor_RegistLuaTick, "RegistLuaTick" }, // 3180208903
		{ &Z_Construct_UFunction_ALuaLevelScriptActor_UnRegistLuaTick, "UnRegistLuaTick" }, // 2079469810
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaLevelScriptActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaLevelScriptActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation Collision Rendering Transformation" },
		{ "IncludePath", "LuaLevelScriptActor.h" },
		{ "KismetHideOverrides", "ReceiveAnyDamage,ReceivePointDamage,ReceiveRadialDamage,ReceiveActorBeginOverlap,ReceiveActorEndOverlap,ReceiveHit,ReceiveDestroyed,ReceiveActorBeginCursorOver,ReceiveActorEndCursorOver,ReceiveActorOnClicked,ReceiveActorOnReleased,ReceiveActorOnInputTouchBegin,ReceiveActorOnInputTouchEnd,ReceiveActorOnInputTouchEnter,ReceiveActorOnInputTouchLeave" },
		{ "ModuleRelativePath", "Public/LuaLevelScriptActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaLevelScriptActor_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaLevelScriptActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaLevelScriptActor_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALuaLevelScriptActor, LuaFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaLevelScriptActor_Statics::NewProp_LuaFilePath_MetaData), Z_Construct_UClass_ALuaLevelScriptActor_Statics::NewProp_LuaFilePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaLevelScriptActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaLevelScriptActor_Statics::NewProp_LuaFilePath,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaLevelScriptActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaOverriderInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaLevelScriptActor, ILuaOverriderInterface), false },  // 69680855
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaLevelScriptActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaLevelScriptActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaLevelScriptActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALuaLevelScriptActor_Statics::ClassParams = {
		&ALuaLevelScriptActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaLevelScriptActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaLevelScriptActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaLevelScriptActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALuaLevelScriptActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaLevelScriptActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALuaLevelScriptActor()
	{
		if (!Z_Registration_Info_UClass_ALuaLevelScriptActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALuaLevelScriptActor.OuterSingleton, Z_Construct_UClass_ALuaLevelScriptActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALuaLevelScriptActor.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaLevelScriptActor>()
	{
		return ALuaLevelScriptActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaLevelScriptActor);
	ALuaLevelScriptActor::~ALuaLevelScriptActor() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALuaLevelScriptActor, ALuaLevelScriptActor::StaticClass, TEXT("ALuaLevelScriptActor"), &Z_Registration_Info_UClass_ALuaLevelScriptActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALuaLevelScriptActor), 2314165128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_2023860125(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
