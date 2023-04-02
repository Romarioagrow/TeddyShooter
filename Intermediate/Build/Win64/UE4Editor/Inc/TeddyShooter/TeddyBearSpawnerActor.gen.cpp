// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/TeddyBearSpawnerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearSpawnerActor() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ATeddyBearSpawnerActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ATeddyBearSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ANoLootTeddyBearActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ARandomGoodLootTeddyBearActor_NoRegister();
// End Cross Module References
	void ATeddyBearSpawnerActor::StaticRegisterNativesATeddyBearSpawnerActor()
	{
	}
	UClass* Z_Construct_UClass_ATeddyBearSpawnerActor_NoRegister()
	{
		return ATeddyBearSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoLootTeddyBearActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NoLootTeddyBearActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomGoodBadLootTeddyBearActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RandomGoodBadLootTeddyBearActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomGoodLootTeddyBearActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RandomGoodLootTeddyBearActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TeddyBearSpawnerActor.h" },
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_NoLootTeddyBearActor_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_NoLootTeddyBearActor = { "NoLootTeddyBearActor", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearSpawnerActor, NoLootTeddyBearActor), Z_Construct_UClass_ANoLootTeddyBearActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_NoLootTeddyBearActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_NoLootTeddyBearActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodBadLootTeddyBearActor_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodBadLootTeddyBearActor = { "RandomGoodBadLootTeddyBearActor", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearSpawnerActor, RandomGoodBadLootTeddyBearActor), Z_Construct_UClass_ARandomGoodBadLootTeddyBearActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodBadLootTeddyBearActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodBadLootTeddyBearActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodLootTeddyBearActor_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "TeddyBearSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodLootTeddyBearActor = { "RandomGoodLootTeddyBearActor", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeddyBearSpawnerActor, RandomGoodLootTeddyBearActor), Z_Construct_UClass_ARandomGoodLootTeddyBearActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodLootTeddyBearActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodLootTeddyBearActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_NoLootTeddyBearActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodBadLootTeddyBearActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::NewProp_RandomGoodLootTeddyBearActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearSpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::ClassParams = {
		&ATeddyBearSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearSpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearSpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearSpawnerActor, 265572417);
	template<> TEDDYSHOOTER_API UClass* StaticClass<ATeddyBearSpawnerActor>()
	{
		return ATeddyBearSpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearSpawnerActor(Z_Construct_UClass_ATeddyBearSpawnerActor, &ATeddyBearSpawnerActor::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("ATeddyBearSpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearSpawnerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
