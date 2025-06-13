// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/BloqueLava.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLava() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueLava_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloqueLava();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Padre();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ABloqueLava::StaticRegisterNativesABloqueLava()
	{
	}
	UClass* Z_Construct_UClass_ABloqueLava_NoRegister()
	{
		return ABloqueLava::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueLava_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticulasLava_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticulasLava;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueLava_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloque_Padre,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueLava_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueLava.h" },
		{ "ModuleRelativePath", "BloqueLava.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueLava_Statics::NewProp_ParticulasLava_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloqueLava.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueLava_Statics::NewProp_ParticulasLava = { "ParticulasLava", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloqueLava, ParticulasLava), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloqueLava_Statics::NewProp_ParticulasLava_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLava_Statics::NewProp_ParticulasLava_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueLava_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueLava_Statics::NewProp_ParticulasLava,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueLava_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLava>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLava_Statics::ClassParams = {
		&ABloqueLava::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloqueLava_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLava_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloqueLava_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLava_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueLava()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueLava_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueLava, 3625413768);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABloqueLava>()
	{
		return ABloqueLava::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueLava(Z_Construct_UClass_ABloqueLava, &ABloqueLava::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ABloqueLava"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLava);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
