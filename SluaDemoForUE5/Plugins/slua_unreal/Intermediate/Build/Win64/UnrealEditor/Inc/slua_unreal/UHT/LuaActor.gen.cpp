// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaActor.h"
#include "../Source/slua_unreal/Public/LuaNetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaActor();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaActor_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaNetSerialization();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ALuaActor::execUnRegistLuaTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegistLuaTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALuaActor::execRegistLuaTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistLuaTick(Z_Param_TickInterval);
		P_NATIVE_END;
	}
	void ALuaActor::StaticRegisterNativesALuaActor()
	{
		UClass* Class = ALuaActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegistLuaTick", &ALuaActor::execRegistLuaTick },
			{ "UnRegistLuaTick", &ALuaActor::execUnRegistLuaTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics
	{
		struct LuaActor_eventRegistLuaTick_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaActor_eventRegistLuaTick_Parms, TickInterval), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::NewProp_TickInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaActor, nullptr, "RegistLuaTick", nullptr, nullptr, Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::LuaActor_eventRegistLuaTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::LuaActor_eventRegistLuaTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALuaActor_RegistLuaTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALuaActor_RegistLuaTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALuaActor_UnRegistLuaTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALuaActor_UnRegistLuaTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALuaActor_UnRegistLuaTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALuaActor, nullptr, "UnRegistLuaTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALuaActor_UnRegistLuaTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALuaActor_UnRegistLuaTick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALuaActor_UnRegistLuaTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALuaActor_UnRegistLuaTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALuaActor);
	UClass* Z_Construct_UClass_ALuaActor_NoRegister()
	{
		return ALuaActor::StaticClass();
	}
	struct Z_Construct_UClass_ALuaActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuaNetSerialization_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LuaNetSerialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuaFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LuaFilePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALuaActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALuaActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALuaActor_RegistLuaTick, "RegistLuaTick" }, // 2933312075
		{ &Z_Construct_UFunction_ALuaActor_UnRegistLuaTick, "UnRegistLuaTick" }, // 4118447856
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LuaActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaNetSerialization_MetaData[] = {
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaNetSerialization = { "LuaNetSerialization", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALuaActor, LuaNetSerialization), Z_Construct_UScriptStruct_FLuaNetSerialization, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaNetSerialization_MetaData), Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaNetSerialization_MetaData) }; // 1810459115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALuaActor, LuaFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath_MetaData), Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaNetSerialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaActor_Statics::NewProp_LuaFilePath,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaOverriderInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaActor, ILuaOverriderInterface), false },  // 69680855
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALuaActor_Statics::ClassParams = {
		&ALuaActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALuaActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALuaActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALuaActor()
	{
		if (!Z_Registration_Info_UClass_ALuaActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALuaActor.OuterSingleton, Z_Construct_UClass_ALuaActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALuaActor.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaActor>()
	{
		return ALuaActor::StaticClass();
	}

	void ALuaActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LuaNetSerialization(TEXT("LuaNetSerialization"));

		const bool bIsValid = true
			&& Name_LuaNetSerialization == ClassReps[(int32)ENetFields_Private::LuaNetSerialization].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALuaActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaActor);
	ALuaActor::~ALuaActor() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALuaActor, ALuaActor::StaticClass, TEXT("ALuaActor"), &Z_Registration_Info_UClass_ALuaActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALuaActor), 2020598604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_816127707(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
