// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LuaGameState_generated_h
#error "LuaGameState.generated.h already included, missing '#pragma once' in LuaGameState.h"
#endif
#define SLUA_UNREAL_LuaGameState_generated_h

#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_SPARSE_DATA
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_RPC_WRAPPERS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALuaGameState(); \
	friend struct Z_Construct_UClass_ALuaGameState_Statics; \
public: \
	DECLARE_CLASS(ALuaGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ALuaGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ALuaGameState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LuaNetSerialization=NETFIELD_REP_START, \
		NETFIELD_REP_END=LuaNetSerialization	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuaGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuaGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuaGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuaGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuaGameState(ALuaGameState&&); \
	NO_API ALuaGameState(const ALuaGameState&); \
public: \
	NO_API virtual ~ALuaGameState();


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_9_PROLOG
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_SPARSE_DATA \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_RPC_WRAPPERS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_INCLASS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ALuaGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
