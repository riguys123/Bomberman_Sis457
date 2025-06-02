// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/DirectorEjercito.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorEjercito() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirectorEjercito_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirectorEjercito();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void ADirectorEjercito::StaticRegisterNativesADirectorEjercito()
	{
	}
	UClass* Z_Construct_UClass_ADirectorEjercito_NoRegister()
	{
		return ADirectorEjercito::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorEjercito_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorEjercito_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorEjercito_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectorEjercito.h" },
		{ "ModuleRelativePath", "Public/DirectorEjercito.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorEjercito_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorEjercito>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirectorEjercito_Statics::ClassParams = {
		&ADirectorEjercito::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirectorEjercito_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorEjercito_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectorEjercito()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirectorEjercito_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirectorEjercito, 1910594030);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ADirectorEjercito>()
	{
		return ADirectorEjercito::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirectorEjercito(Z_Construct_UClass_ADirectorEjercito, &ADirectorEjercito::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ADirectorEjercito"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorEjercito);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
