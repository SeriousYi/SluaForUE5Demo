// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaOverriderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaOverriderInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ILuaOverriderInterface::execGetLuaFilePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLuaFilePath_Implementation();
		P_NATIVE_END;
	}
	struct LuaOverriderInterface_eventGetLuaFilePath_Parms
	{
		FString ReturnValue;
	};
	FString ILuaOverriderInterface::GetLuaFilePath() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLuaFilePath instead.");
		LuaOverriderInterface_eventGetLuaFilePath_Parms Parms;
		return Parms.ReturnValue;
	}
	void ULuaOverriderInterface::StaticRegisterNativesULuaOverriderInterface()
	{
		UClass* Class = ULuaOverriderInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLuaFilePath", &ILuaOverriderInterface::execGetLuaFilePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaOverriderInterface_eventGetLuaFilePath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverriderInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverriderInterface, nullptr, "GetLuaFilePath", nullptr, nullptr, Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::PropPointers), sizeof(LuaOverriderInterface_eventGetLuaFilePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::PropPointers) < 2048);
	static_assert(sizeof(LuaOverriderInterface_eventGetLuaFilePath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuaOverriderInterface);
	UClass* Z_Construct_UClass_ULuaOverriderInterface_NoRegister()
	{
		return ULuaOverriderInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULuaOverriderInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaOverriderInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverriderInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaOverriderInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaOverriderInterface_GetLuaFilePath, "GetLuaFilePath" }, // 2567399342
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverriderInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaOverriderInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverriderInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaOverriderInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILuaOverriderInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaOverriderInterface_Statics::ClassParams = {
		&ULuaOverriderInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverriderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaOverriderInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULuaOverriderInterface()
	{
		if (!Z_Registration_Info_UClass_ULuaOverriderInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaOverriderInterface.OuterSingleton, Z_Construct_UClass_ULuaOverriderInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULuaOverriderInterface.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaOverriderInterface>()
	{
		return ULuaOverriderInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaOverriderInterface);
	ULuaOverriderInterface::~ULuaOverriderInterface() {}
	static FName NAME_ULuaOverriderInterface_GetLuaFilePath = FName(TEXT("GetLuaFilePath"));
	FString ILuaOverriderInterface::Execute_GetLuaFilePath(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULuaOverriderInterface::StaticClass()));
		LuaOverriderInterface_eventGetLuaFilePath_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULuaOverriderInterface_GetLuaFilePath);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const ILuaOverriderInterface*)(O->GetNativeInterfaceAddress(ULuaOverriderInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetLuaFilePath_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULuaOverriderInterface, ULuaOverriderInterface::StaticClass, TEXT("ULuaOverriderInterface"), &Z_Registration_Info_UClass_ULuaOverriderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaOverriderInterface), 69680855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_2017463918(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverriderInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
