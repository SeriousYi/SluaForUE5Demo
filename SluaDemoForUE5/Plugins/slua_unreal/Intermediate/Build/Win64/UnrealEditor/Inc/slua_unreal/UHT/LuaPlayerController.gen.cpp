// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaPlayerController.h"
#include "../Source/slua_unreal/Public/LuaNetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaPlayerController();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ALuaPlayerController_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaNetSerialization();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	void ALuaPlayerController::StaticRegisterNativesALuaPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALuaPlayerController);
	UClass* Z_Construct_UClass_ALuaPlayerController_NoRegister()
	{
		return ALuaPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALuaPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	UObject* (*const Z_Construct_UClass_ALuaPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "LuaPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LuaPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaNetSerialization_MetaData[] = {
		{ "ModuleRelativePath", "Public/LuaPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaNetSerialization = { "LuaNetSerialization", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALuaPlayerController, LuaNetSerialization), Z_Construct_UScriptStruct_FLuaNetSerialization, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaNetSerialization_MetaData), Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaNetSerialization_MetaData) }; // 1810459115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALuaPlayerController, LuaFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath_MetaData), Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALuaPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaNetSerialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALuaPlayerController_Statics::NewProp_LuaFilePath,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALuaPlayerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaOverriderInterface_NoRegister, (int32)VTABLE_OFFSET(ALuaPlayerController, ILuaOverriderInterface), false },  // 69680855
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALuaPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALuaPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALuaPlayerController_Statics::ClassParams = {
		&ALuaPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALuaPlayerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALuaPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALuaPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALuaPlayerController()
	{
		if (!Z_Registration_Info_UClass_ALuaPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALuaPlayerController.OuterSingleton, Z_Construct_UClass_ALuaPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALuaPlayerController.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ALuaPlayerController>()
	{
		return ALuaPlayerController::StaticClass();
	}

	void ALuaPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LuaNetSerialization(TEXT("LuaNetSerialization"));

		const bool bIsValid = true
			&& Name_LuaNetSerialization == ClassReps[(int32)ENetFields_Private::LuaNetSerialization].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALuaPlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALuaPlayerController);
	ALuaPlayerController::~ALuaPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALuaPlayerController, ALuaPlayerController::StaticClass, TEXT("ALuaPlayerController"), &Z_Registration_Info_UClass_ALuaPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALuaPlayerController), 185492215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaPlayerController_h_2395778905(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
