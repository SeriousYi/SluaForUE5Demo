// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaNetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaNetSerialization() {}
// Cross Module References
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaNetSerialization();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LuaNetSerialization;
class UScriptStruct* FLuaNetSerialization::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LuaNetSerialization.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LuaNetSerialization.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuaNetSerialization, (UObject*)Z_Construct_UPackage__Script_slua_unreal(), TEXT("LuaNetSerialization"));
	}
	return Z_Registration_Info_UScriptStruct_LuaNetSerialization.OuterSingleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FLuaNetSerialization>()
{
	return FLuaNetSerialization::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLuaNetSerialization_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaNetSerialization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuaNetSerialization>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"LuaNetSerialization",
		nullptr,
		0,
		sizeof(FLuaNetSerialization),
		alignof(FLuaNetSerialization),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLuaNetSerialization()
	{
		if (!Z_Registration_Info_UScriptStruct_LuaNetSerialization.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LuaNetSerialization.InnerSingleton, Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LuaNetSerialization.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaNetSerialization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaNetSerialization_h_Statics::ScriptStructInfo[] = {
		{ FLuaNetSerialization::StaticStruct, Z_Construct_UScriptStruct_FLuaNetSerialization_Statics::NewStructOps, TEXT("LuaNetSerialization"), &Z_Registration_Info_UScriptStruct_LuaNetSerialization, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLuaNetSerialization), 1810459115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaNetSerialization_h_2737805065(TEXT("/Script/slua_unreal"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaNetSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaNetSerialization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
