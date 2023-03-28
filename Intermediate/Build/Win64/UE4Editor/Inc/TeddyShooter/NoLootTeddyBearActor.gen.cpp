// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/NoLootTeddyBearActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoLootTeddyBearActor() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ANoLootTeddyBearActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ANoLootTeddyBearActor();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ATeddyBearActor();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
// End Cross Module References
	void ANoLootTeddyBearActor::StaticRegisterNativesANoLootTeddyBearActor()
	{
	}
	UClass* Z_Construct_UClass_ANoLootTeddyBearActor_NoRegister()
	{
		return ANoLootTeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ANoLootTeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoLootTeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATeddyBearActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoLootTeddyBearActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NoLootTeddyBearActor.h" },
		{ "ModuleRelativePath", "NoLootTeddyBearActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoLootTeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoLootTeddyBearActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANoLootTeddyBearActor_Statics::ClassParams = {
		&ANoLootTeddyBearActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANoLootTeddyBearActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoLootTeddyBearActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoLootTeddyBearActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANoLootTeddyBearActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANoLootTeddyBearActor, 1095083539);
	template<> TEDDYSHOOTER_API UClass* StaticClass<ANoLootTeddyBearActor>()
	{
		return ANoLootTeddyBearActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANoLootTeddyBearActor(Z_Construct_UClass_ANoLootTeddyBearActor, &ANoLootTeddyBearActor::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("ANoLootTeddyBearActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoLootTeddyBearActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
