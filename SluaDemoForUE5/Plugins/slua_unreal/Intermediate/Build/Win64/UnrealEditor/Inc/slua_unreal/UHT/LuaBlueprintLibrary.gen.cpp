// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Source/slua_unreal/Public/LuaBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLuaBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaBlueprintLibrary();
	SLUA_UNREAL_API UClass* Z_Construct_UClass_ULuaBlueprintLibrary_NoRegister();
	SLUA_UNREAL_API UScriptStruct* Z_Construct_UScriptStruct_FLuaBPVar();
	UPackage* Z_Construct_UPackage__Script_slua_unreal();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LuaBPVar;
class UScriptStruct* FLuaBPVar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LuaBPVar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LuaBPVar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLuaBPVar, (UObject*)Z_Construct_UPackage__Script_slua_unreal(), TEXT("LuaBPVar"));
	}
	return Z_Registration_Info_UScriptStruct_LuaBPVar.OuterSingleton;
}
template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<FLuaBPVar>()
{
	return FLuaBPVar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLuaBPVar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLuaBPVar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLuaBPVar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLuaBPVar>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLuaBPVar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
		nullptr,
		&NewStructOps,
		"LuaBPVar",
		nullptr,
		0,
		sizeof(FLuaBPVar),
		alignof(FLuaBPVar),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLuaBPVar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLuaBPVar_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLuaBPVar()
	{
		if (!Z_Registration_Info_UScriptStruct_LuaBPVar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LuaBPVar.InnerSingleton, Z_Construct_UScriptStruct_FLuaBPVar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LuaBPVar.InnerSingleton;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetObjectFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=ULuaBlueprintLibrary::GetObjectFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetBoolFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULuaBlueprintLibrary::GetBoolFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetStringFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=ULuaBlueprintLibrary::GetStringFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetNumberFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=ULuaBlueprintLibrary::GetNumberFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execGetIntFromVar)
	{
		P_GET_STRUCT(FLuaBPVar,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=ULuaBlueprintLibrary::GetIntFromVar(Z_Param_Value,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromObject(Z_Param_WorldContextObject,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromBool)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromBool(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromNumber)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromNumber(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCreateVarFromInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CreateVarFromInt(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCallToLua)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CallToLua(Z_Param_WorldContextObject,Z_Param_FunctionName,Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULuaBlueprintLibrary::execCallToLuaWithArgs)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FunctionName);
		P_GET_TARRAY_REF(FLuaBPVar,Z_Param_Out_Args);
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLuaBPVar*)Z_Param__Result=ULuaBlueprintLibrary::CallToLuaWithArgs(Z_Param_WorldContextObject,Z_Param_FunctionName,Z_Param_Out_Args,Z_Param_StateName);
		P_NATIVE_END;
	}
	void ULuaBlueprintLibrary::StaticRegisterNativesULuaBlueprintLibrary()
	{
		UClass* Class = ULuaBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallToLua", &ULuaBlueprintLibrary::execCallToLua },
			{ "CallToLuaWithArgs", &ULuaBlueprintLibrary::execCallToLuaWithArgs },
			{ "CreateVarFromBool", &ULuaBlueprintLibrary::execCreateVarFromBool },
			{ "CreateVarFromInt", &ULuaBlueprintLibrary::execCreateVarFromInt },
			{ "CreateVarFromNumber", &ULuaBlueprintLibrary::execCreateVarFromNumber },
			{ "CreateVarFromObject", &ULuaBlueprintLibrary::execCreateVarFromObject },
			{ "CreateVarFromString", &ULuaBlueprintLibrary::execCreateVarFromString },
			{ "GetBoolFromVar", &ULuaBlueprintLibrary::execGetBoolFromVar },
			{ "GetIntFromVar", &ULuaBlueprintLibrary::execGetIntFromVar },
			{ "GetNumberFromVar", &ULuaBlueprintLibrary::execGetNumberFromVar },
			{ "GetObjectFromVar", &ULuaBlueprintLibrary::execGetObjectFromVar },
			{ "GetStringFromVar", &ULuaBlueprintLibrary::execGetStringFromVar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics
	{
		struct LuaBlueprintLibrary_eventCallToLua_Parms
		{
			UObject* WorldContextObject;
			FString FunctionName;
			FString StateName;
			FLuaBPVar ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLua_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLua_Parms, FunctionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLua_Parms, StateName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLua_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "DisplayName", "Call To Lua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CallToLua", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::LuaBlueprintLibrary_eventCallToLua_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::LuaBlueprintLibrary_eventCallToLua_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics
	{
		struct LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms
		{
			UObject* WorldContextObject;
			FString FunctionName;
			TArray<FLuaBPVar> Args;
			FString StateName;
			FLuaBPVar ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Args_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Args;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, FunctionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_Inner = { "Args", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, Args), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_MetaData), Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_MetaData) }; // 2874647915
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, StateName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_Args,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_StateName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call a lua function with args */" },
#endif
		{ "DisplayName", "Call To Lua With Arguments" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call a lua function with args" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CallToLuaWithArgs", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::LuaBlueprintLibrary_eventCallToLuaWithArgs_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromBool_Parms
		{
			bool Value;
			FLuaBPVar ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((LuaBlueprintLibrary_eventCreateVarFromBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LuaBlueprintLibrary_eventCreateVarFromBool_Parms), &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromBool", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::LuaBlueprintLibrary_eventCreateVarFromBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::LuaBlueprintLibrary_eventCreateVarFromBool_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromInt_Parms
		{
			int32 Value;
			FLuaBPVar ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromInt_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromInt", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::LuaBlueprintLibrary_eventCreateVarFromInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::LuaBlueprintLibrary_eventCreateVarFromInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromNumber_Parms
		{
			float Value;
			FLuaBPVar ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromNumber_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromNumber", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::LuaBlueprintLibrary_eventCreateVarFromNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::LuaBlueprintLibrary_eventCreateVarFromNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromObject_Parms
		{
			UObject* WorldContextObject;
			UObject* Value;
			FLuaBPVar ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromObject_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromObject", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::LuaBlueprintLibrary_eventCreateVarFromObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::LuaBlueprintLibrary_eventCreateVarFromObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics
	{
		struct LuaBlueprintLibrary_eventCreateVarFromString_Parms
		{
			FString Value;
			FLuaBPVar ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromString_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventCreateVarFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "CreateVarFromString", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::LuaBlueprintLibrary_eventCreateVarFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::LuaBlueprintLibrary_eventCreateVarFromString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetBoolFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetBoolFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetBoolFromVar_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LuaBlueprintLibrary_eventGetBoolFromVar_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LuaBlueprintLibrary_eventGetBoolFromVar_Parms), &Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetBoolFromVar", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::LuaBlueprintLibrary_eventGetBoolFromVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::LuaBlueprintLibrary_eventGetBoolFromVar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetIntFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetIntFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetIntFromVar_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetIntFromVar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetIntFromVar", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::LuaBlueprintLibrary_eventGetIntFromVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::LuaBlueprintLibrary_eventGetIntFromVar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetNumberFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetNumberFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetNumberFromVar_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetNumberFromVar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetNumberFromVar", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::LuaBlueprintLibrary_eventGetNumberFromVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::LuaBlueprintLibrary_eventGetNumberFromVar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetObjectFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetObjectFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetObjectFromVar_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetObjectFromVar_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetObjectFromVar", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::LuaBlueprintLibrary_eventGetObjectFromVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::LuaBlueprintLibrary_eventGetObjectFromVar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics
	{
		struct LuaBlueprintLibrary_eventGetStringFromVar_Parms
		{
			FLuaBPVar Value;
			int32 Index;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetStringFromVar_Parms, Value), Z_Construct_UScriptStruct_FLuaBPVar, METADATA_PARAMS(0, nullptr) }; // 2874647915
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetStringFromVar_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LuaBlueprintLibrary_eventGetStringFromVar_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "slua" },
		{ "CPP_Default_Index", "1" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULuaBlueprintLibrary, nullptr, "GetStringFromVar", nullptr, nullptr, Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::LuaBlueprintLibrary_eventGetStringFromVar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::LuaBlueprintLibrary_eventGetStringFromVar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULuaBlueprintLibrary);
	UClass* Z_Construct_UClass_ULuaBlueprintLibrary_NoRegister()
	{
		return ULuaBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULuaBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULuaBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_slua_unreal,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaBlueprintLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULuaBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLua, "CallToLua" }, // 515192442
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CallToLuaWithArgs, "CallToLuaWithArgs" }, // 4206222830
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromBool, "CreateVarFromBool" }, // 3442873631
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromInt, "CreateVarFromInt" }, // 209476908
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromNumber, "CreateVarFromNumber" }, // 616833569
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromObject, "CreateVarFromObject" }, // 80699557
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_CreateVarFromString, "CreateVarFromString" }, // 2930495400
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetBoolFromVar, "GetBoolFromVar" }, // 3208898826
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetIntFromVar, "GetIntFromVar" }, // 3930527588
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetNumberFromVar, "GetNumberFromVar" }, // 2846178307
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetObjectFromVar, "GetObjectFromVar" }, // 3520623579
		{ &Z_Construct_UFunction_ULuaBlueprintLibrary_GetStringFromVar, "GetStringFromVar" }, // 3892661184
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaBlueprintLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULuaBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LuaBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/LuaBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULuaBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULuaBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULuaBlueprintLibrary_Statics::ClassParams = {
		&ULuaBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULuaBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULuaBlueprintLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULuaBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_ULuaBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULuaBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULuaBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULuaBlueprintLibrary.OuterSingleton;
	}
	template<> SLUA_UNREAL_API UClass* StaticClass<ULuaBlueprintLibrary>()
	{
		return ULuaBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULuaBlueprintLibrary);
	ULuaBlueprintLibrary::~ULuaBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FLuaBPVar::StaticStruct, Z_Construct_UScriptStruct_FLuaBPVar_Statics::NewStructOps, TEXT("LuaBPVar"), &Z_Registration_Info_UScriptStruct_LuaBPVar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLuaBPVar), 2874647915U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULuaBlueprintLibrary, ULuaBlueprintLibrary::StaticClass, TEXT("ULuaBlueprintLibrary"), &Z_Registration_Info_UClass_ULuaBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULuaBlueprintLibrary), 1411297193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_2051114254(TEXT("/Script/slua_unreal"),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
