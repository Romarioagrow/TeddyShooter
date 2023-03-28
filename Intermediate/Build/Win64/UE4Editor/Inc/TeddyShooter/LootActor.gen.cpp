// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/LootActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootActor() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALootActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALootActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
// End Cross Module References
	void ALootActor::StaticRegisterNativesALootActor()
	{
	}
	UClass* Z_Construct_UClass_ALootActor_NoRegister()
	{
		return ALootActor::StaticClass();
	}
	struct Z_Construct_UClass_ALootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootActor.h" },
		{ "ModuleRelativePath", "LootActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALootActor_Statics::ClassParams = {
		&ALootActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALootActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALootActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALootActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALootActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALootActor, 3178874454);
	template<> TEDDYSHOOTER_API UClass* StaticClass<ALootActor>()
	{
		return ALootActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALootActor(Z_Construct_UClass_ALootActor, &ALootActor::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("ALootActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALootActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
