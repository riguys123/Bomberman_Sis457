// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/ComandoColocarBomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComandoColocarBomba() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AComandoColocarBomba_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AComandoColocarBomba();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIComand_NoRegister();
// End Cross Module References
	void AComandoColocarBomba::StaticRegisterNativesAComandoColocarBomba()
	{
	}
	UClass* Z_Construct_UClass_AComandoColocarBomba_NoRegister()
	{
		return AComandoColocarBomba::StaticClass();
	}
	struct Z_Construct_UClass_AComandoColocarBomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComandoColocarBomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComandoColocarBomba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComandoColocarBomba.h" },
		{ "ModuleRelativePath", "Public/ComandoColocarBomba.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AComandoColocarBomba_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIComand_NoRegister, (int32)VTABLE_OFFSET(AComandoColocarBomba, IIComand), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComandoColocarBomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComandoColocarBomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComandoColocarBomba_Statics::ClassParams = {
		&AComandoColocarBomba::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AComandoColocarBomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComandoColocarBomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComandoColocarBomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComandoColocarBomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComandoColocarBomba, 4200059542);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AComandoColocarBomba>()
	{
		return AComandoColocarBomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComandoColocarBomba(Z_Construct_UClass_AComandoColocarBomba, &AComandoColocarBomba::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AComandoColocarBomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComandoColocarBomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
