// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaActorComponent.h"
#include "../Source/slua_unreal/Public/LuaNetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaActorComponent();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaActorComponent_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaNetSerialization();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ULuaActorComponent::execUnRegistLuaTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegistLuaTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaActorComponent::execRegistLuaTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistLuaTick(Z_Param_TickInterval);
		P_NATIVE_END;
	}
	void ULuaActorComponent::StaticRegisterNativesULuaActorComponent()
	{
		UClass* Class = ULuaActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegistLuaTick", &ULuaActorComponent::execRegistLuaTick },
			{ "UnRegistLuaTick", &ULuaActorComponent::execUnRegistLuaTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics
	{
		struct LuaActorComponent_eventRegistLuaTick_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaActorComponent_eventRegistLuaTick_Parms, TickInterval), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::NewProp_TickInterval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaActorComponent, nullptr, "RegistLuaTick", nullptr, nullptr, Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::LuaActorComponent_eventRegistLuaTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::LuaActorComponent_eventRegistLuaTick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaActorComponent, nullptr, "UnRegistLuaTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuaActorComponent);
	UClass* Z_Construct_UClass_ULuaActorComponent_NoRegister()
	{
		return ULuaActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULuaActorComponent_Statics
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
	UObject* (*const Z_Construct_UClass_ULuaActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaActorComponent_RegistLuaTick, "RegistLuaTick" }, // 2242359673
		{ &Z_Construct_UFunction_ULuaActorComponent_UnRegistLuaTick, "UnRegistLuaTick" }, // 3799685925
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LuaActorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization_MetaData[] = {
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization = { "LuaNetSerialization", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULuaActorComponent, LuaNetSerialization), Z_Construct_UScriptStruct_FLuaNetSerialization, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization_MetaData), Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization_MetaData) }; // 1810459115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULuaActorComponent, LuaFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData), Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaNetSerialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaActorComponent_Statics::NewProp_LuaFilePath,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULuaActorComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaOverriderInterface_NoRegister, (int32)VTABLE_OFFSET(ULuaActorComponent, ILuaOverriderInterface), false },  // 69680855
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaActorComponent_Statics::ClassParams = {
		&ULuaActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaActorComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaActorComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULuaActorComponent()
	{
		if (!Z_Registration_Info_UClass_ULuaActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaActorComponent.OuterSingleton, Z_Construct_UClass_ULuaActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULuaActorComponent.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaActorComponent>()
	{
		return ULuaActorComponent::StaticClass();
	}

	void ULuaActorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LuaNetSerialization(TEXT("LuaNetSerialization"));

		const bool bIsValid = true
			&& Name_LuaNetSerialization == ClassReps[(int32)ENetFields_Private::LuaNetSerialization].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ULuaActorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaActorComponent);
	ULuaActorComponent::~ULuaActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULuaActorComponent, ULuaActorComponent::StaticClass, TEXT("ULuaActorComponent"), &Z_Registration_Info_UClass_ULuaActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaActorComponent), 820025586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActorComponent_h_673659848(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
