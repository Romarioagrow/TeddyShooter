// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeddyShooter/LauncherPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLauncherPawn() {}
// Cross Module References
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALauncherPawn_NoRegister();
	TEDDYSHOOTER_API UClass* Z_Construct_UClass_ALauncherPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_TeddyShooter();
// End Cross Module References
	void ALauncherPawn::StaticRegisterNativesALauncherPawn()
	{
	}
	UClass* Z_Construct_UClass_ALauncherPawn_NoRegister()
	{
		return ALauncherPawn::StaticClass();
	}
	struct Z_Construct_UClass_ALauncherPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALauncherPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TeddyShooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LauncherPawn.h" },
		{ "ModuleRelativePath", "LauncherPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALauncherPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALauncherPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALauncherPawn_Statics::ClassParams = {
		&ALauncherPawn::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ALauncherPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALauncherPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALauncherPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALauncherPawn, 2602819376);
	template<> TEDDYSHOOTER_API UClass* StaticClass<ALauncherPawn>()
	{
		return ALauncherPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALauncherPawn(Z_Construct_UClass_ALauncherPawn, &ALauncherPawn::StaticClass, TEXT("/Script/TeddyShooter"), TEXT("ALauncherPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALauncherPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
