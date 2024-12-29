// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/EPropertyClassUEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPropertyClassUEnum() {}
// Cross Module References
	SLUA_UNREAL_API UEnum* Z_Construct_UEnum_slua_unreal_EPropertyClass();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyClass;
	static UEnum* EPropertyClass_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyClass.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyClass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_slua_unreal_EPropertyClass, (UObject*)Z_Construct_UPackage__Script_slua_unreal(), TEXT("EPropertyClass"));
		}
		return Z_Registration_Info_UEnum_EPropertyClass.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UEnum* StaticEnum<EPropertyClass>()
	{
		return EPropertyClass_StaticEnum();
	}
	struct Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics::Enumerators[] = {
		{ "EPropertyClass::Byte", (int64)EPropertyClass::Byte },
		{ "EPropertyClass::Int8", (int64)EPropertyClass::Int8 },
		{ "EPropertyClass::Int16", (int64)EPropertyClass::Int16 },
		{ "EPropertyClass::Int", (int64)EPropertyClass::Int },
		{ "EPropertyClass::Int64", (int64)EPropertyClass::Int64 },
		{ "EPropertyClass::UInt16", (int64)EPropertyClass::UInt16 },
		{ "EPropertyClass::UInt32", (int64)EPropertyClass::UInt32 },
		{ "EPropertyClass::UInt64", (int64)EPropertyClass::UInt64 },
		{ "EPropertyClass::UnsizedInt", (int64)EPropertyClass::UnsizedInt },
		{ "EPropertyClass::UnsizedUInt", (int64)EPropertyClass::UnsizedUInt },
		{ "EPropertyClass::Float", (int64)EPropertyClass::Float },
		{ "EPropertyClass::Double", (int64)EPropertyClass::Double },
		{ "EPropertyClass::Bool", (int64)EPropertyClass::Bool },
		{ "EPropertyClass::SoftClass", (int64)EPropertyClass::SoftClass },
		{ "EPropertyClass::WeakObject", (int64)EPropertyClass::WeakObject },
		{ "EPropertyClass::LazyObject", (int64)EPropertyClass::LazyObject },
		{ "EPropertyClass::SoftObject", (int64)EPropertyClass::SoftObject },
		{ "EPropertyClass::Class", (int64)EPropertyClass::Class },
		{ "EPropertyClass::Object", (int64)EPropertyClass::Object },
		{ "EPropertyClass::Interface", (int64)EPropertyClass::Interface },
		{ "EPropertyClass::Name", (int64)EPropertyClass::Name },
		{ "EPropertyClass::Str", (int64)EPropertyClass::Str },
		{ "EPropertyClass::Array", (int64)EPropertyClass::Array },
		{ "EPropertyClass::Map", (int64)EPropertyClass::Map },
		{ "EPropertyClass::Set", (int64)EPropertyClass::Set },
		{ "EPropertyClass::Struct", (int64)EPropertyClass::Struct },
		{ "EPropertyClass::Delegate", (int64)EPropertyClass::Delegate },
		{ "EPropertyClass::MulticastDelegate", (int64)EPropertyClass::MulticastDelegate },
		{ "EPropertyClass::Text", (int64)EPropertyClass::Text },
		{ "EPropertyClass::Enum", (int64)EPropertyClass::Enum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "EPropertyClass::Array" },
		{ "Bool.Name", "EPropertyClass::Bool" },
		{ "Byte.Name", "EPropertyClass::Byte" },
		{ "Class.Name", "EPropertyClass::Class" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// copy code from UE, avoid be removed from version 4.22\n" },
#endif
		{ "Delegate.Name", "EPropertyClass::Delegate" },
		{ "Double.Name", "EPropertyClass::Double" },
		{ "Enum.Name", "EPropertyClass::Enum" },
		{ "Float.Name", "EPropertyClass::Float" },
		{ "Int.Name", "EPropertyClass::Int" },
		{ "Int16.Name", "EPropertyClass::Int16" },
		{ "Int64.Name", "EPropertyClass::Int64" },
		{ "Int8.Name", "EPropertyClass::Int8" },
		{ "Interface.Name", "EPropertyClass::Interface" },
		{ "LazyObject.Name", "EPropertyClass::LazyObject" },
		{ "Map.Name", "EPropertyClass::Map" },
		{ "ModuleRelativePath", "Public/EPropertyClassUEnum.h" },
		{ "MulticastDelegate.Name", "EPropertyClass::MulticastDelegate" },
		{ "Name.Name", "EPropertyClass::Name" },
		{ "Object.Name", "EPropertyClass::Object" },
		{ "Set.Name", "EPropertyClass::Set" },
		{ "SoftClass.Name", "EPropertyClass::SoftClass" },
		{ "SoftObject.Name", "EPropertyClass::SoftObject" },
		{ "Str.Name", "EPropertyClass::Str" },
		{ "Struct.Name", "EPropertyClass::Struct" },
		{ "Text.Name", "EPropertyClass::Text" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "copy code from UE, avoid be removed from version 4.22" },
#endif
		{ "UInt16.Name", "EPropertyClass::UInt16" },
		{ "UInt32.Name", "EPropertyClass::UInt32" },
		{ "UInt64.Name", "EPropertyClass::UInt64" },
		{ "UnsizedInt.Name", "EPropertyClass::UnsizedInt" },
		{ "UnsizedUInt.Name", "EPropertyClass::UnsizedUInt" },
		{ "WeakObject.Name", "EPropertyClass::WeakObject" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		"EPropertyClass",
		"EPropertyClass",
		Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_slua_unreal_EPropertyClass()
	{
		if (!Z_Registration_Info_UEnum_EPropertyClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyClass.InnerSingleton, Z_Construct_UEnum_slua_unreal_EPropertyClass_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyClass.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_EPropertyClassUEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_EPropertyClassUEnum_h_Statics::EnumInfo[] = {
		{ EPropertyClass_StaticEnum, TEXT("EPropertyClass"), &Z_Registration_Info_UEnum_EPropertyClass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 579351622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_EPropertyClassUEnum_h_930753934(TEXT("/Script/slua_unreal"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_EPropertyClassUEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_EPropertyClassUEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
