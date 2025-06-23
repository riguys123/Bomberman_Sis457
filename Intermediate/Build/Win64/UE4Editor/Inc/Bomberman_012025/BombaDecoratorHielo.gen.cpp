// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/BombaDecoratorHielo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaDecoratorHielo() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaDecoratorHielo_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaDecoratorHielo();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaDecorator();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void ABombaDecoratorHielo::StaticRegisterNativesABombaDecoratorHielo()
	{
	}
	UClass* Z_Construct_UClass_ABombaDecoratorHielo_NoRegister()
	{
		return ABombaDecoratorHielo::StaticClass();
	}
	struct Z_Construct_UClass_ABombaDecoratorHielo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombaDecoratorHielo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABombaDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaDecoratorHielo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BombaDecoratorHielo.h" },
		{ "ModuleRelativePath", "Public/BombaDecoratorHielo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombaDecoratorHielo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaDecoratorHielo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombaDecoratorHielo_Statics::ClassParams = {
		&ABombaDecoratorHielo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABombaDecoratorHielo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaDecoratorHielo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombaDecoratorHielo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombaDecoratorHielo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombaDecoratorHielo, 1370444044);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABombaDecoratorHielo>()
	{
		return ABombaDecoratorHielo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombaDecoratorHielo(Z_Construct_UClass_ABombaDecoratorHielo, &ABombaDecoratorHielo::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ABombaDecoratorHielo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaDecoratorHielo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
