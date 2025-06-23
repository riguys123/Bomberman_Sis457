// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/CuidadorJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCuidadorJugador() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ACuidadorJugador_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ACuidadorJugador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMementoJugador_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberman_012025Character_NoRegister();
// End Cross Module References
	void ACuidadorJugador::StaticRegisterNativesACuidadorJugador()
	{
	}
	UClass* Z_Construct_UClass_ACuidadorJugador_NoRegister()
	{
		return ACuidadorJugador::StaticClass();
	}
	struct Z_Construct_UClass_ACuidadorJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memento_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Memento;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaseDelJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClaseDelJugador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACuidadorJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuidadorJugador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CuidadorJugador.h" },
		{ "ModuleRelativePath", "Public/CuidadorJugador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_Memento_MetaData[] = {
		{ "ModuleRelativePath", "Public/CuidadorJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_Memento = { "Memento", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACuidadorJugador, Memento), Z_Construct_UClass_AMementoJugador_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_Memento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_Memento_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_ClaseDelJugador_MetaData[] = {
		{ "Category", "Jugador" },
		{ "ModuleRelativePath", "Public/CuidadorJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_ClaseDelJugador = { "ClaseDelJugador", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACuidadorJugador, ClaseDelJugador), Z_Construct_UClass_ABomberman_012025Character_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_ClaseDelJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_ClaseDelJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACuidadorJugador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_Memento,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACuidadorJugador_Statics::NewProp_ClaseDelJugador,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACuidadorJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACuidadorJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACuidadorJugador_Statics::ClassParams = {
		&ACuidadorJugador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACuidadorJugador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACuidadorJugador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACuidadorJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACuidadorJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACuidadorJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACuidadorJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACuidadorJugador, 1470579702);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ACuidadorJugador>()
	{
		return ACuidadorJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACuidadorJugador(Z_Construct_UClass_ACuidadorJugador, &ACuidadorJugador::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ACuidadorJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACuidadorJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
