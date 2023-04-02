// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TEDDYSHOOTER_LootActor_generated_h
#error "LootActor.generated.h already included, missing '#pragma once' in LootActor.h"
#endif
#define TEDDYSHOOTER_LootActor_generated_h

#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_SPARSE_DATA
#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootActor(); \
	friend struct Z_Construct_UClass_ALootActor_Statics; \
public: \
	DECLARE_CLASS(ALootActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeddyShooter"), NO_API) \
	DECLARE_SERIALIZER(ALootActor)


#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALootActor(); \
	friend struct Z_Construct_UClass_ALootActor_Statics; \
public: \
	DECLARE_CLASS(ALootActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeddyShooter"), NO_API) \
	DECLARE_SERIALIZER(ALootActor)


#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALootActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALootActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootActor(ALootActor&&); \
	NO_API ALootActor(const ALootActor&); \
public:


#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootActor(ALootActor&&); \
	NO_API ALootActor(const ALootActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ALootActor)


#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_PRIVATE_PROPERTY_OFFSET
#define TeddyShooter_Source_TeddyShooter_LootActor_h_9_PROLOG
#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_PRIVATE_PROPERTY_OFFSET \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_SPARSE_DATA \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_RPC_WRAPPERS \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_INCLASS \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TeddyShooter_Source_TeddyShooter_LootActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_PRIVATE_PROPERTY_OFFSET \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_SPARSE_DATA \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_INCLASS_NO_PURE_DECLS \
	TeddyShooter_Source_TeddyShooter_LootActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDDYSHOOTER_API UClass* StaticClass<class ALootActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TeddyShooter_Source_TeddyShooter_LootActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
