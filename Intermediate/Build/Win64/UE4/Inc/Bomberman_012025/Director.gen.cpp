// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Director.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirector() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirector_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ADirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void ADirector::StaticRegisterNativesADirector()
	{
	}
	UClass* Z_Construct_UClass_ADirector_NoRegister()
	{
		return ADirector::StaticClass();
	}
	struct Z_Construct_UClass_ADirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Director.h" },
		{ "ModuleRelativePath", "Director.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADirector_Statics::ClassParams = {
		&ADirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADirector, 3681563036);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ADirector>()
	{
		return ADirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADirector(Z_Construct_UClass_ADirector, &ADirector::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ADirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
