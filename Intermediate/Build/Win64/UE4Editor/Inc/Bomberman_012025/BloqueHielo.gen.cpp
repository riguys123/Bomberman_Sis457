// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/BloqueHielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueHielo() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueHielo_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueHielo();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Padre();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void ABloqueHielo::StaticRegisterNativesABloqueHielo()
	{
	}
	UClass* Z_Construct_UClass_ABloqueHielo_NoRegister()
	{
		return ABloqueHielo::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueHielo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueHielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueHielo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueHielo.h" },
		{ "ModuleRelativePath", "BloqueHielo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueHielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueHielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueHielo_Statics::ClassParams = {
		&ABloqueHielo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABloqueHielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueHielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueHielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueHielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueHielo, 3503912514);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueHielo>()
	{
		return ABloqueHielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueHielo(Z_Construct_UClass_ABloqueHielo, &ABloqueHielo::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ABloqueHielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueHielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
