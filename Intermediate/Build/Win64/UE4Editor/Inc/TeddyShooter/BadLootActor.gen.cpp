// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/BadLootActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBadLootActor() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ABadLootActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ABadLootActor();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALootActor();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
// End Cross Module References
	void ABadLootActor::StaticRegisterNativesABadLootActor()
	{
	}
	UClass* Z_Construct_UClass_ABadLootActor_NoRegister()
	{
		return ABadLootActor::StaticClass();
	}
	struct Z_Construct_UClass_ABadLootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABadLootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALootActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABadLootActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BadLootActor.h" },
		{ "ModuleRelativePath", "BadLootActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABadLootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABadLootActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABadLootActor_Statics::ClassParams = {
		&ABadLootActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABadLootActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABadLootActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABadLootActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABadLootActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABadLootActor, 876530624);
	template<> TEDDYSHOOTER_API UClass* StaticClass<ABadLootActor>()
	{
		return ABadLootActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABadLootActor(Z_Construct_UClass_ABadLootActor, &ABadLootActor::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("ABadLootActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABadLootActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
