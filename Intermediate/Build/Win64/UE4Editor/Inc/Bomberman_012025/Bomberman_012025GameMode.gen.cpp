// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Bomberman_012025GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman_012025GameMode() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberman_012025GameMode_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberman_012025GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void ABomberman_012025GameMode::StaticRegisterNativesABomberman_012025GameMode()
	{
	}
	UClass* Z_Construct_UClass_ABomberman_012025GameMode_NoRegister()
	{
		return ABomberman_012025GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABomberman_012025GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberman_012025GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Bomberman_012025GameMode.h" },
		{ "ModuleRelativePath", "Bomberman_012025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberman_012025GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman_012025GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberman_012025GameMode_Statics::ClassParams = {
		&ABomberman_012025GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberman_012025GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberman_012025GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberman_012025GameMode, 3537533181);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberman_012025GameMode>()
	{
		return ABomberman_012025GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberman_012025GameMode(Z_Construct_UClass_ABomberman_012025GameMode, &ABomberman_012025GameMode::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ABomberman_012025GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman_012025GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
