// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/EjercitoA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEjercitoA() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEjercitoA_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEjercitoA();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void AEjercitoA::StaticRegisterNativesAEjercitoA()
	{
	}
	UClass* Z_Construct_UClass_AEjercitoA_NoRegister()
	{
		return AEjercitoA::StaticClass();
	}
	struct Z_Construct_UClass_AEjercitoA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEjercitoA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEjercitoA_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EjercitoA.h" },
		{ "ModuleRelativePath", "Public/EjercitoA.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEjercitoA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEjercitoA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEjercitoA_Statics::ClassParams = {
		&AEjercitoA::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEjercitoA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEjercitoA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEjercitoA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEjercitoA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEjercitoA, 2167587256);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AEjercitoA>()
	{
		return AEjercitoA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEjercitoA(Z_Construct_UClass_AEjercitoA, &AEjercitoA::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AEjercitoA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEjercitoA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
