// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaOverrider.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaOverrider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverrider();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaOverrider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	DEFINE_FUNCTION(ULuaOverrider::execInputGesture)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputGesture_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaOverrider::execInputVectorAxis)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputVectorAxis_Implementation(Z_Param_Out_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaOverrider::execInputTouch)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputTouch_Implementation(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaOverrider::execInputAxis)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAxis_Implementation(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaOverrider::execInputAction)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputAction_Implementation(Z_Param_Key);
		P_NATIVE_END;
	}
	struct LuaOverrider_eventInputAction_Parms
	{
		FKey Key;
	};
	struct LuaOverrider_eventInputAxis_Parms
	{
		float AxisValue;
	};
	struct LuaOverrider_eventInputGesture_Parms
	{
		float Value;
	};
	struct LuaOverrider_eventInputTouch_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		FVector Location;
	};
	struct LuaOverrider_eventInputVectorAxis_Parms
	{
		FVector AxisValue;
	};
	static FName NAME_ULuaOverrider_InputAction = FName(TEXT("InputAction"));
	void ULuaOverrider::InputAction(FKey Key)
	{
		LuaOverrider_eventInputAction_Parms Parms;
		Parms.Key=Key;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputAction),&Parms);
	}
	static FName NAME_ULuaOverrider_InputAxis = FName(TEXT("InputAxis"));
	void ULuaOverrider::InputAxis(float AxisValue)
	{
		LuaOverrider_eventInputAxis_Parms Parms;
		Parms.AxisValue=AxisValue;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputAxis),&Parms);
	}
	static FName NAME_ULuaOverrider_InputGesture = FName(TEXT("InputGesture"));
	void ULuaOverrider::InputGesture(float Value)
	{
		LuaOverrider_eventInputGesture_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputGesture),&Parms);
	}
	static FName NAME_ULuaOverrider_InputTouch = FName(TEXT("InputTouch"));
	void ULuaOverrider::InputTouch(ETouchIndex::Type FingerIndex, FVector const& Location)
	{
		LuaOverrider_eventInputTouch_Parms Parms;
		Parms.FingerIndex=FingerIndex;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputTouch),&Parms);
	}
	static FName NAME_ULuaOverrider_InputVectorAxis = FName(TEXT("InputVectorAxis"));
	void ULuaOverrider::InputVectorAxis(FVector const& AxisValue)
	{
		LuaOverrider_eventInputVectorAxis_Parms Parms;
		Parms.AxisValue=AxisValue;
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_InputVectorAxis),&Parms);
	}
	static FName NAME_ULuaOverrider_TriggerAnimNotify = FName(TEXT("TriggerAnimNotify"));
	void ULuaOverrider::TriggerAnimNotify()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULuaOverrider_TriggerAnimNotify),NULL);
	}
	void ULuaOverrider::StaticRegisterNativesULuaOverrider()
	{
		UClass* Class = ULuaOverrider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InputAction", &ULuaOverrider::execInputAction },
			{ "InputAxis", &ULuaOverrider::execInputAxis },
			{ "InputGesture", &ULuaOverrider::execInputGesture },
			{ "InputTouch", &ULuaOverrider::execInputTouch },
			{ "InputVectorAxis", &ULuaOverrider::execInputVectorAxis },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputAction_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaOverrider_eventInputAction_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputAction", nullptr, nullptr, Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::PropPointers), sizeof(LuaOverrider_eventInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(LuaOverrider_eventInputAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaOverrider_eventInputAxis_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputAxis", nullptr, nullptr, Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::PropPointers), sizeof(LuaOverrider_eventInputAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(LuaOverrider_eventInputAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaOverrider_eventInputGesture_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputGesture", nullptr, nullptr, Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::PropPointers), sizeof(LuaOverrider_eventInputGesture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::PropPointers) < 2048);
	static_assert(sizeof(LuaOverrider_eventInputGesture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaOverrider_eventInputTouch_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 569023590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaOverrider_eventInputTouch_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location_MetaData), Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_FingerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputTouch", nullptr, nullptr, Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::PropPointers), sizeof(LuaOverrider_eventInputTouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::PropPointers) < 2048);
	static_assert(sizeof(LuaOverrider_eventInputTouch_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaOverrider_eventInputVectorAxis_Parms, AxisValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue_MetaData), Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "InputVectorAxis", nullptr, nullptr, Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::PropPointers), sizeof(LuaOverrider_eventInputVectorAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(LuaOverrider_eventInputVectorAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaOverrider_InputVectorAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaOverrider_InputVectorAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaOverrider, nullptr, "TriggerAnimNotify", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuaOverrider);
	UClass* Z_Construct_UClass_ULuaOverrider_NoRegister()
	{
		return ULuaOverrider::StaticClass();
	}
	struct Z_Construct_UClass_ULuaOverrider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaOverrider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverrider_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaOverrider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaOverrider_InputAction, "InputAction" }, // 316713326
		{ &Z_Construct_UFunction_ULuaOverrider_InputAxis, "InputAxis" }, // 2312043182
		{ &Z_Construct_UFunction_ULuaOverrider_InputGesture, "InputGesture" }, // 1281927465
		{ &Z_Construct_UFunction_ULuaOverrider_InputTouch, "InputTouch" }, // 3323697331
		{ &Z_Construct_UFunction_ULuaOverrider_InputVectorAxis, "InputVectorAxis" }, // 4091454518
		{ &Z_Construct_UFunction_ULuaOverrider_TriggerAnimNotify, "TriggerAnimNotify" }, // 514411501
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverrider_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaOverrider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaOverrider.h" },
		{ "ModuleRelativePath", "Public/LuaOverrider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaOverrider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaOverrider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaOverrider_Statics::ClassParams = {
		&ULuaOverrider::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaOverrider_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaOverrider_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULuaOverrider()
	{
		if (!Z_Registration_Info_UClass_ULuaOverrider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaOverrider.OuterSingleton, Z_Construct_UClass_ULuaOverrider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULuaOverrider.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaOverrider>()
	{
		return ULuaOverrider::StaticClass();
	}
	ULuaOverrider::ULuaOverrider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaOverrider);
	ULuaOverrider::~ULuaOverrider() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULuaOverrider, ULuaOverrider::StaticClass, TEXT("ULuaOverrider"), &Z_Registration_Info_UClass_ULuaOverrider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaOverrider), 7971319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_2498679610(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaOverrider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
