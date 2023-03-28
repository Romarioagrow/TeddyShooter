// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDDYSHOOTER_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define TEDDYSHOOTER_GameHUD_generated_h

#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_SPARSE_DATA
#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_RPC_WRAPPERS
#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeddyShooter"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeddyShooter"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public:


#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD)


#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET
#define TeddyShooter_Source_TeddyShooter_GameHUD_h_12_PROLOG
#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_SPARSE_DATA \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_RPC_WRAPPERS \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_INCLASS \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TeddyShooter_Source_TeddyShooter_GameHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_SPARSE_DATA \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
	TeddyShooter_Source_TeddyShooter_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDDYSHOOTER_API UClass* StaticClass<class AGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TeddyShooter_Source_TeddyShooter_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
