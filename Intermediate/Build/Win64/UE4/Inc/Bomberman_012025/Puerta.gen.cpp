// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Puerta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuerta() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuerta_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuerta();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APuerta::StaticRegisterNativesAPuerta()
	{
	}
	UClass* Z_Construct_UClass_APuerta_NoRegister()
	{
		return APuerta::StaticClass();
	}
	struct Z_Construct_UClass_APuerta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Malla_Puerta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Malla_Puerta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuerta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuerta_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Puerta.h" },
		{ "ModuleRelativePath", "Puerta.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuerta_Statics::NewProp_Malla_Puerta_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Componente de malla est?tica\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Puerta.h" },
		{ "ToolTip", "Componente de malla est?tica" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuerta_Statics::NewProp_Malla_Puerta = { "Malla_Puerta", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuerta, Malla_Puerta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuerta_Statics::NewProp_Malla_Puerta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::NewProp_Malla_Puerta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuerta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuerta_Statics::NewProp_Malla_Puerta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuerta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuerta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuerta_Statics::ClassParams = {
		&APuerta::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuerta_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuerta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuerta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuerta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuerta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuerta, 4112576542);
	template<> BOMBERMAN_012025_API UClass* StaticClass<APuerta>()
	{
		return APuerta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuerta(Z_Construct_UClass_APuerta, &APuerta::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("APuerta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuerta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
