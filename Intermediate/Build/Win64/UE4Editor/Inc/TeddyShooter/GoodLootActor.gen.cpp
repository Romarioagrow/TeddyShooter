// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/GoodLootActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoodLootActor() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_AGoodLootActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_AGoodLootActor();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALootActor();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
// End Cross Module References
	void AGoodLootActor::StaticRegisterNativesAGoodLootActor()
	{
	}
	UClass* Z_Construct_UClass_AGoodLootActor_NoRegister()
	{
		return AGoodLootActor::StaticClass();
	}
	struct Z_Construct_UClass_AGoodLootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoodLootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALootActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoodLootActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GoodLootActor.h" },
		{ "ModuleRelativePath", "GoodLootActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoodLootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoodLootActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoodLootActor_Statics::ClassParams = {
		&AGoodLootActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGoodLootActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoodLootActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoodLootActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoodLootActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoodLootActor, 1985294864);
	template<> TEDDYSHOOTER_API UClass* StaticClass<AGoodLootActor>()
	{
		return AGoodLootActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoodLootActor(Z_Construct_UClass_AGoodLootActor, &AGoodLootActor::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("AGoodLootActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoodLootActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
