// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Bloque_Padre.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Padre() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Padre_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Padre();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
// End Cross Module References
	void ABloque_Padre::StaticRegisterNativesABloque_Padre()
	{
	}
	UClass* Z_Construct_UClass_ABloque_Padre_NoRegister()
	{
		return ABloque_Padre::StaticClass();
	}
	struct Z_Construct_UClass_ABloque_Padre_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MallaBloque_Padre_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MallaBloque_Padre;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particulas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particulas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloque_Padre_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Padre_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque_Padre.h" },
		{ "ModuleRelativePath", "Bloque_Padre.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Padre_Statics::NewProp_MallaBloque_Padre_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// Componente de malla est?tica\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bloque_Padre.h" },
		{ "ToolTip", "Componente de malla est?tica" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_Padre_Statics::NewProp_MallaBloque_Padre = { "MallaBloque_Padre", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque_Padre, MallaBloque_Padre), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloque_Padre_Statics::NewProp_MallaBloque_Padre_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Padre_Statics::NewProp_MallaBloque_Padre_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloque_Padre_Statics::NewProp_Particulas_MetaData[] = {
		{ "Comment", "// malla del bloque padre\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bloque_Padre.h" },
		{ "ToolTip", "malla del bloque padre" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloque_Padre_Statics::NewProp_Particulas = { "Particulas", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloque_Padre, Particulas), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloque_Padre_Statics::NewProp_Particulas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Padre_Statics::NewProp_Particulas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloque_Padre_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Padre_Statics::NewProp_MallaBloque_Padre,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloque_Padre_Statics::NewProp_Particulas,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloque_Padre_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(ABloque_Padre, IIPrototype), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloque_Padre_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Padre>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Padre_Statics::ClassParams = {
		&ABloque_Padre::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloque_Padre_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Padre_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloque_Padre_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Padre_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloque_Padre()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloque_Padre_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloque_Padre, 1207876402);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABloque_Padre>()
	{
		return ABloque_Padre::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloque_Padre(Z_Construct_UClass_ABloque_Padre, &ABloque_Padre::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ABloque_Padre"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Padre);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
