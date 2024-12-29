// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaUserWidget() {}
// Cross Module References
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaUserWidget();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	void ULuaUserWidget::StaticRegisterNativesULuaUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuaUserWidget);
	UClass* Z_Construct_UClass_ULuaUserWidget_NoRegister()
	{
		return ULuaUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULuaUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
	UObject* (*const Z_Construct_UClass_ULuaUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaUserWidget.h" },
		{ "ModuleRelativePath", "Public/LuaUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\n// so copy & paste them\n" },
#endif
		{ "ModuleRelativePath", "Public/LuaUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "below UPROPERTY and UFUNCTION can't be put to macro LUABASE_BODY\nso copy & paste them" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULuaUserWidget, LuaFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData), Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaUserWidget_Statics::NewProp_LuaFilePath,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULuaUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaOverriderInterface_NoRegister, (int32)VTABLE_OFFSET(ULuaUserWidget, ILuaOverriderInterface), false },  // 69680855
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaUserWidget_Statics::ClassParams = {
		&ULuaUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULuaUserWidget()
	{
		if (!Z_Registration_Info_UClass_ULuaUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaUserWidget.OuterSingleton, Z_Construct_UClass_ULuaUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULuaUserWidget.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaUserWidget>()
	{
		return ULuaUserWidget::StaticClass();
	}
	ULuaUserWidget::ULuaUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaUserWidget);
	ULuaUserWidget::~ULuaUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULuaUserWidget, ULuaUserWidget::StaticClass, TEXT("ULuaUserWidget"), &Z_Registration_Info_UClass_ULuaUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaUserWidget), 3582984388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_6996119(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
