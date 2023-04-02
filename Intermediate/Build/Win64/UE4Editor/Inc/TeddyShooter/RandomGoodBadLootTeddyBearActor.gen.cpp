// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/RandomGoodBadLootTeddyBearActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomGoodBadLootTeddyBearActor() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALootTeddyBearActor();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
// End Cross Module References
	void ARandomGoodBadLootTeddyBearActor::StaticRegisterNativesARandomGoodBadLootTeddyBearActor()
	{
	}
	UClass* Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_NoRegister()
	{
		return ARandomGoodBadLootTeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALootTeddyBearActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RandomGoodBadLootTeddyBearActor.h" },
		{ "ModuleRelativePath", "RandomGoodBadLootTeddyBearActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomGoodBadLootTeddyBearActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_Statics::ClassParams = {
		&ARandomGoodBadLootTeddyBearActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARandomGoodBadLootTeddyBearActor, 2284075481);
	template<> TEDDYSHOOTER_API UClass* StaticClass<ARandomGoodBadLootTeddyBearActor>()
	{
		return ARandomGoodBadLootTeddyBearActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARandomGoodBadLootTeddyBearActor(Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor, &ARandomGoodBadLootTeddyBearActor::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("ARandomGoodBadLootTeddyBearActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomGoodBadLootTeddyBearActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
