// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLuaBPVar;
#ifdef SLUA_UNREAL_LuaBlueprintLibrary_generated_h
#error "LuaBlueprintLibrary.generated.h already included, missing '#pragma once' in LuaBlueprintLibrary.h"
#endif
#define SLUA_UNREAL_LuaBlueprintLibrary_generated_h

#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLuaBPVar_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SLUA_UNREAL_API UScriptStruct* StaticStruct<struct FLuaBPVar>();

#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_SPARSE_DATA
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetObjectFromVar); \
	DECLARE_FUNCTION(execGetBoolFromVar); \
	DECLARE_FUNCTION(execGetStringFromVar); \
	DECLARE_FUNCTION(execGetNumberFromVar); \
	DECLARE_FUNCTION(execGetIntFromVar); \
	DECLARE_FUNCTION(execCreateVarFromObject); \
	DECLARE_FUNCTION(execCreateVarFromBool); \
	DECLARE_FUNCTION(execCreateVarFromNumber); \
	DECLARE_FUNCTION(execCreateVarFromString); \
	DECLARE_FUNCTION(execCreateVarFromInt); \
	DECLARE_FUNCTION(execCallToLua); \
	DECLARE_FUNCTION(execCallToLuaWithArgs);


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesULuaBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULuaBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULuaBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ULuaBlueprintLibrary)


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULuaBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULuaBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULuaBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULuaBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULuaBlueprintLibrary(ULuaBlueprintLibrary&&); \
	NO_API ULuaBlueprintLibrary(const ULuaBlueprintLibrary&); \
public: \
	NO_API virtual ~ULuaBlueprintLibrary();


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_34_PROLOG
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_SPARSE_DATA \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_RPC_WRAPPERS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_INCLASS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ULuaBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
