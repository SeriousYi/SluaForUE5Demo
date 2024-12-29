// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeslua_unreal_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_slua_unreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_slua_unreal()
	{
		if (!Z_Registration_Info_UPackage__Script_slua_unreal.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/slua_unreal",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x911C9439,
				0x1219BD63,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_slua_unreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_slua_unreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_slua_unreal(Z_Construct_UPackage__Script_slua_unreal, TEXT("/Script/slua_unreal"), Z_Registration_Info_UPackage__Script_slua_unreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x911C9439, 0x1219BD63));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
