// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/BombaDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombaDecorator() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaDecorator_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABombaDecorator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIBomba_NoRegister();
// End Cross Module References
	void ABombaDecorator::StaticRegisterNativesABombaDecorator()
	{
	}
	UClass* Z_Construct_UClass_ABombaDecorator_NoRegister()
	{
		return ABombaDecorator::StaticClass();
	}
	struct Z_Construct_UClass_ABombaDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombaDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombaDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BombaDecorator.h" },
		{ "ModuleRelativePath", "Public/BombaDecorator.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABombaDecorator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIBomba_NoRegister, (int32)VTABLE_OFFSET(ABombaDecorator, IIBomba), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombaDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombaDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombaDecorator_Statics::ClassParams = {
		&ABombaDecorator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABombaDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombaDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombaDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombaDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombaDecorator, 2317236661);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABombaDecorator>()
	{
		return ABombaDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombaDecorator(Z_Construct_UClass_ABombaDecorator, &ABombaDecorator::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ABombaDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombaDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
