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
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AInvokerBombManager_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvokerBombManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvokerBombManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemigosA_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemigosA_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemigosA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_InvokerBombManager_MetaData[] = {
		{ "Comment", "// Puntero al invocador (gestor de comandos)\n" },
		{ "ModuleRelativePath", "Bomberman_012025GameMode.h" },
		{ "ToolTip", "Puntero al invocador (gestor de comandos)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_InvokerBombManager = { "InvokerBombManager", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025GameMode, InvokerBombManager), Z_Construct_UClass_AInvokerBombManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_InvokerBombManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_InvokerBombManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_EnemigosA_Inner = { "EnemigosA", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_EnemigosA_MetaData[] = {
		{ "Comment", "// Para almacenar posiciones v?lidas de spawn\n" },
		{ "ModuleRelativePath", "Bomberman_012025GameMode.h" },
		{ "ToolTip", "Para almacenar posiciones v?lidas de spawn" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_EnemigosA = { "EnemigosA", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025GameMode, EnemigosA), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_EnemigosA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_EnemigosA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberman_012025GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_InvokerBombManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_EnemigosA_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025GameMode_Statics::NewProp_EnemigosA,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberman_012025GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman_012025GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberman_012025GameMode_Statics::ClassParams = {
		&ABomberman_012025GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABomberman_012025GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025GameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ABomberman_012025GameMode, 2790737692);
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
