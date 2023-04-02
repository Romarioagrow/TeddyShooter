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
#ifdef TEDDYSHOOTER_TeddyBearActor_generated_h
#error "TeddyBearActor.generated.h already included, missing '#pragma once' in TeddyBearActor.h"
#endif
#define TEDDYSHOOTER_TeddyBearActor_generated_h

#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_SPARSE_DATA
#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeddyBearActor(); \
	friend struct Z_Construct_UClass_ATeddyBearActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeddyShooter"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearActor)


#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATeddyBearActor(); \
	friend struct Z_Construct_UClass_ATeddyBearActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TeddyShooter"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearActor)


#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeddyBearActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeddyBearActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearActor(ATeddyBearActor&&); \
	NO_API ATeddyBearActor(const ATeddyBearActor&); \
public:


#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearActor(ATeddyBearActor&&); \
	NO_API ATeddyBearActor(const ATeddyBearActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATeddyBearActor)


#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_PRIVATE_PROPERTY_OFFSET
#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_9_PROLOG
#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_PRIVATE_PROPERTY_OFFSET \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_SPARSE_DATA \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_RPC_WRAPPERS \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_INCLASS \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_PRIVATE_PROPERTY_OFFSET \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_SPARSE_DATA \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_INCLASS_NO_PURE_DECLS \
	TeddyShooter_Source_TeddyShooter_TeddyBearActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDDYSHOOTER_API UClass* StaticClass<class ATeddyBearActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TeddyShooter_Source_TeddyShooter_TeddyBearActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
