// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/EnemigoSubterraneoTarantula.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSubterraneoTarantula() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoSubterraneoTarantula_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoSubterraneoTarantula();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void AEnemigoSubterraneoTarantula::StaticRegisterNativesAEnemigoSubterraneoTarantula()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoSubterraneoTarantula_NoRegister()
	{
		return AEnemigoSubterraneoTarantula::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoSubterraneoTarantula_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoSubterraneoTarantula_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoSubterraneoTarantula_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoSubterraneoTarantula.h" },
		{ "ModuleRelativePath", "EnemigoSubterraneoTarantula.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoSubterraneoTarantula_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSubterraneoTarantula>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSubterraneoTarantula_Statics::ClassParams = {
		&AEnemigoSubterraneoTarantula::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoSubterraneoTarantula_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneoTarantula_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoSubterraneoTarantula()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoSubterraneoTarantula_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoSubterraneoTarantula, 4276120716);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoSubterraneoTarantula>()
	{
		return AEnemigoSubterraneoTarantula::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoSubterraneoTarantula(Z_Construct_UClass_AEnemigoSubterraneoTarantula, &AEnemigoSubterraneoTarantula::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AEnemigoSubterraneoTarantula"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSubterraneoTarantula);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
