// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/EnemigoTerrestreLobo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoTerrestreLobo() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoTerrestreLobo_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoTerrestreLobo();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void AEnemigoTerrestreLobo::StaticRegisterNativesAEnemigoTerrestreLobo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoTerrestreLobo_NoRegister()
	{
		return AEnemigoTerrestreLobo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoTerrestreLobo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoTerrestreLobo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoTerrestreLobo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoTerrestreLobo.h" },
		{ "ModuleRelativePath", "EnemigoTerrestreLobo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoTerrestreLobo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoTerrestreLobo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoTerrestreLobo_Statics::ClassParams = {
		&AEnemigoTerrestreLobo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoTerrestreLobo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoTerrestreLobo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoTerrestreLobo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoTerrestreLobo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoTerrestreLobo, 2126973582);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoTerrestreLobo>()
	{
		return AEnemigoTerrestreLobo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoTerrestreLobo(Z_Construct_UClass_AEnemigoTerrestreLobo, &AEnemigoTerrestreLobo::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AEnemigoTerrestreLobo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoTerrestreLobo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
