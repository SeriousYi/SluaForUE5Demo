// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Private/LatentDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatentDelegate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULatentDelegate();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULatentDelegate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ULatentDelegate::execOnLatentCallback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_threadRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLatentCallback(Z_Param_threadRef);
		P_NATIVE_END;
	}
	void ULatentDelegate::StaticRegisterNativesULatentDelegate()
	{
		UClass* Class = ULatentDelegate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLatentCallback", &ULatentDelegate::execOnLatentCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics
	{
		struct LatentDelegate_eventOnLatentCallback_Parms
		{
			int32 threadRef;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_threadRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::NewProp_threadRef = { "threadRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LatentDelegate_eventOnLatentCallback_Parms, threadRef), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::NewProp_threadRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lua|LatentDelegate" },
		{ "ModuleRelativePath", "Private/LatentDelegate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULatentDelegate, nullptr, "OnLatentCallback", nullptr, nullptr, Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::LatentDelegate_eventOnLatentCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::LatentDelegate_eventOnLatentCallback_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULatentDelegate_OnLatentCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULatentDelegate_OnLatentCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatentDelegate);
	UClass* Z_Construct_UClass_ULatentDelegate_NoRegister()
	{
		return ULatentDelegate::StaticClass();
	}
	struct Z_Construct_UClass_ULatentDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULatentDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatentDelegate_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULatentDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULatentDelegate_OnLatentCallback, "OnLatentCallback" }, // 640281014
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULatentDelegate_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatentDelegate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LatentDelegate.h" },
		{ "ModuleRelativePath", "Private/LatentDelegate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULatentDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatentDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatentDelegate_Statics::ClassParams = {
		&ULatentDelegate::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULatentDelegate_Statics::Class_MetaDataParams), Z_Construct_UClass_ULatentDelegate_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULatentDelegate()
	{
		if (!Z_Registration_Info_UClass_ULatentDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatentDelegate.OuterSingleton, Z_Construct_UClass_ULatentDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULatentDelegate.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ULatentDelegate>()
	{
		return ULatentDelegate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULatentDelegate);
	ULatentDelegate::~ULatentDelegate() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULatentDelegate, ULatentDelegate::StaticClass, TEXT("ULatentDelegate"), &Z_Registration_Info_UClass_ULatentDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatentDelegate), 2592152729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_1422864713(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Private_LatentDelegate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
