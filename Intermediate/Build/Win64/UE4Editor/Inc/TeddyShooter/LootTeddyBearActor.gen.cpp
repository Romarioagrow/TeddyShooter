// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/LootTeddyBearActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootTeddyBearActor() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALootTeddyBearActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALootTeddyBearActor();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ATeddyBearActor();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_AGoodLootActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ABadLootActor_NoRegister();
// End Cross Module References
	void ALootTeddyBearActor::StaticRegisterNativesALootTeddyBearActor()
	{
	}
	UClass* Z_Construct_UClass_ALootTeddyBearActor_NoRegister()
	{
		return ALootTeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ALootTeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGoodLoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UGoodLoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UBadLoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UBadLoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALootTeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATeddyBearActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootTeddyBearActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LootTeddyBearActor.h" },
		{ "ModuleRelativePath", "LootTeddyBearActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot_MetaData[] = {
		{ "Category", "LootBlueprints" },
		{ "MetaClass", "Loot" },
		{ "ModuleRelativePath", "LootTeddyBearActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot = { "UGoodLoot", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootTeddyBearActor, UGoodLoot), Z_Construct_UClass_AGoodLootActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot_MetaData[] = {
		{ "Category", "LootBlueprints" },
		{ "MetaClass", "Loot" },
		{ "ModuleRelativePath", "LootTeddyBearActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot = { "UBadLoot", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALootTeddyBearActor, UBadLoot), Z_Construct_UClass_ABadLootActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootTeddyBearActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALootTeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootTeddyBearActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALootTeddyBearActor_Statics::ClassParams = {
		&ALootTeddyBearActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALootTeddyBearActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALootTeddyBearActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALootTeddyBearActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALootTeddyBearActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALootTeddyBearActor, 1526542243);
	template<> TEDDYSHOOTER_API UClass* StaticClass<ALootTeddyBearActor>()
	{
		return ALootTeddyBearActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALootTeddyBearActor(Z_Construct_UClass_ALootTeddyBearActor, &ALootTeddyBearActor::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("ALootTeddyBearActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALootTeddyBearActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
