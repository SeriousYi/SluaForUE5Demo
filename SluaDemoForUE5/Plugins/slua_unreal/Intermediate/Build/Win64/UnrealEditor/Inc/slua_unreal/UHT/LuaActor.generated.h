// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LuaActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLUA_UNREAL_LuaActor_generated_h
#error "LuaActor.generated.h already included, missing '#pragma once' in LuaActor.h"
#endif
#define SLUA_UNREAL_LuaActor_generated_h

#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_SPARSE_DATA
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnRegistLuaTick); \
	DECLARE_FUNCTION(execRegistLuaTick);


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_ACCESSORS
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALuaActor(); \
	friend struct Z_Construct_UClass_ALuaActor_Statics; \
public: \
	DECLARE_CLASS(ALuaActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/slua_unreal"), NO_API) \
	DECLARE_SERIALIZER(ALuaActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALuaActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LuaNetSerialization=NETFIELD_REP_START, \
		NETFIELD_REP_END=LuaNetSerialization	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALuaActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALuaActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALuaActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALuaActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALuaActor(ALuaActor&&); \
	NO_API ALuaActor(const ALuaActor&); \
public: \
	NO_API virtual ~ALuaActor();


#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_10_PROLOG
#define FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_SPARSE_DATA \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_RPC_WRAPPERS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_ACCESSORS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_INCLASS \
	FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLUA_UNREAL_API UClass* StaticClass<class ALuaActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Learning_SluaDemoForUE5_SluaDemoForUE5_Plugins_slua_unreal_Source_slua_unreal_Public_LuaActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
