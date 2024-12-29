// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaUEObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaUEObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaObject();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaObject_NoRegister();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	void ULuaObject::StaticRegisterNativesULuaObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuaObject);
	UClass* Z_Construct_UClass_ULuaObject_NoRegister()
	{
		return ULuaObject::StaticClass();
	}
	struct Z_Construct_UClass_ULuaObject_Statics
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
	UObject* (*const Z_Construct_UClass_ULuaObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LuaUEObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LuaUEObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaObject_Statics::NewProp_LuaFilePath_MetaData[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaUEObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULuaObject_Statics::NewProp_LuaFilePath = { "LuaFilePath", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULuaObject, LuaFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaObject_Statics::NewProp_LuaFilePath_MetaData), Z_Construct_UClass_ULuaObject_Statics::NewProp_LuaFilePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULuaObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULuaObject_Statics::NewProp_LuaFilePath,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULuaObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULuaOverriderInterface_NoRegister, (int32)VTABLE_OFFSET(ULuaObject, ILuaOverriderInterface), false },  // 69680855
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaObject_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaObject_Statics::ClassParams = {
		&ULuaObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULuaObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULuaObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaObject_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaObject_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULuaObject()
	{
		if (!Z_Registration_Info_UClass_ULuaObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaObject.OuterSingleton, Z_Construct_UClass_ULuaObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULuaObject.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaObject>()
	{
		return ULuaObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaObject);
	ULuaObject::~ULuaObject() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULuaObject, ULuaObject::StaticClass, TEXT("ULuaObject"), &Z_Registration_Info_UClass_ULuaObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaObject), 2136747888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_2243716843(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaUEObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
