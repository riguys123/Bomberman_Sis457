// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/EnemigoSubterraneoTopo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSubterraneoTopo() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoSubterraneoTopo_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoSubterraneoTopo();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void AEnemigoSubterraneoTopo::StaticRegisterNativesAEnemigoSubterraneoTopo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoSubterraneoTopo_NoRegister()
	{
		return AEnemigoSubterraneoTopo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoSubterraneoTopo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoSubterraneoTopo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoSubterraneoTopo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoSubterraneoTopo.h" },
		{ "ModuleRelativePath", "EnemigoSubterraneoTopo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoSubterraneoTopo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSubterraneoTopo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSubterraneoTopo_Statics::ClassParams = {
		&AEnemigoSubterraneoTopo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoSubterraneoTopo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneoTopo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoSubterraneoTopo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoSubterraneoTopo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoSubterraneoTopo, 3970125472);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoSubterraneoTopo>()
	{
		return AEnemigoSubterraneoTopo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoSubterraneoTopo(Z_Construct_UClass_AEnemigoSubterraneoTopo, &AEnemigoSubterraneoTopo::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AEnemigoSubterraneoTopo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSubterraneoTopo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
