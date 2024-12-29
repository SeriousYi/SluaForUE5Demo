// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaLevelScriptActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LuaLevelScriptActor_generated_h
#error "LuaLevelScriptActor.generated.h already included, missing '#pragma once' in LuaLevelScriptActor.h"
#endif
#define SLUA_UNREAL_LuaLevelScriptActor_generated_h

#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_SPARSE_DATA
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnRegistLuaTick); \
	DECLARE_FUNCTION(execRegistLuaTick);


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALuaLevelScriptActor(); \
	friend struct Z_Construct_UClass_ALuaLevelScriptActor_Statics; \
public: \
	DECLARE_CLASS(ALuaLevelScriptActor, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ALuaLevelScriptActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALuaLevelScriptActor*>(this); }


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuaLevelScriptActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuaLevelScriptActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuaLevelScriptActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuaLevelScriptActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuaLevelScriptActor(ALuaLevelScriptActor&&); \
	NO_API ALuaLevelScriptActor(const ALuaLevelScriptActor&); \
public: \
	NO_API virtual ~ALuaLevelScriptActor();


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_9_PROLOG
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_SPARSE_DATA \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_RPC_WRAPPERS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_INCLASS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ALuaLevelScriptActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaLevelScriptActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
