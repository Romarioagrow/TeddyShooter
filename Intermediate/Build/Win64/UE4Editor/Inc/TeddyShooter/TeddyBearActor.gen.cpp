// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/TeddyBearActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearActor() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ATeddyBearActor_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ATeddyBearActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
// End Cross Module References
	void ATeddyBearActor::StaticRegisterNativesATeddyBearActor()
	{
	}
	UClass* Z_Construct_UClass_ATeddyBearActor_NoRegister()
	{
		return ATeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TeddyBearActor.h" },
		{ "ModuleRelativePath", "TeddyBearActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearActor_Statics::ClassParams = {
		&ATeddyBearActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATeddyBearActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeddyBearActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeddyBearActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeddyBearActor, 1137300665);
	template<> TEDDYSHOOTER_API UClass* StaticClass<ATeddyBearActor>()
	{
		return ATeddyBearActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeddyBearActor(Z_Construct_UClass_ATeddyBearActor, &ATeddyBearActor::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("ATeddyBearActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
