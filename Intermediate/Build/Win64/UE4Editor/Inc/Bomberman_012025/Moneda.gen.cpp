// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/Moneda.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoneda() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMoneda_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMoneda();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberman_012025GameMode_NoRegister();
// End Cross Module References
	void AMoneda::StaticRegisterNativesAMoneda()
	{
	}
	UClass* Z_Construct_UClass_AMoneda_NoRegister()
	{
		return AMoneda::StaticClass();
	}
	struct Z_Construct_UClass_AMoneda_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoneda_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoneda_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Moneda.h" },
		{ "ModuleRelativePath", "Public/Moneda.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoneda_Statics::NewProp_GameModeRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Moneda.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMoneda_Statics::NewProp_GameModeRef = { "GameModeRef", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMoneda, GameModeRef), Z_Construct_UClass_ABomberman_012025GameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoneda_Statics::NewProp_GameModeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::NewProp_GameModeRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoneda_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoneda_Statics::NewProp_GameModeRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoneda_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoneda>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoneda_Statics::ClassParams = {
		&AMoneda::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoneda_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoneda_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoneda_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoneda()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoneda_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoneda, 38280283);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AMoneda>()
	{
		return AMoneda::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoneda(Z_Construct_UClass_AMoneda, &AMoneda::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AMoneda"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoneda);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
