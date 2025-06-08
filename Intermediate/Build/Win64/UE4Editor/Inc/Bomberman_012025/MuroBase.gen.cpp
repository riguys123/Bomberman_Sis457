// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/MuroBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMuroBase() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMuroBase_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMuroBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIPrototype_NoRegister();
// End Cross Module References
	void AMuroBase::StaticRegisterNativesAMuroBase()
	{
	}
	UClass* Z_Construct_UClass_AMuroBase_NoRegister()
	{
		return AMuroBase::StaticClass();
	}
	struct Z_Construct_UClass_AMuroBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tipo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tipo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMuro_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMuro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMuroBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuroBase.h" },
		{ "ModuleRelativePath", "Public/MuroBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroBase_Statics::NewProp_Tipo_MetaData[] = {
		{ "Category", "MuroBase" },
		{ "ModuleRelativePath", "Public/MuroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMuroBase_Statics::NewProp_Tipo = { "Tipo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroBase, Tipo), METADATA_PARAMS(Z_Construct_UClass_AMuroBase_Statics::NewProp_Tipo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroBase_Statics::NewProp_Tipo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMuroBase_Statics::NewProp_MeshMuro_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MuroBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMuroBase_Statics::NewProp_MeshMuro = { "MeshMuro", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMuroBase, MeshMuro), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMuroBase_Statics::NewProp_MeshMuro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroBase_Statics::NewProp_MeshMuro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMuroBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroBase_Statics::NewProp_Tipo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMuroBase_Statics::NewProp_MeshMuro,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMuroBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIPrototype_NoRegister, (int32)VTABLE_OFFSET(AMuroBase, IIPrototype), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMuroBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMuroBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMuroBase_Statics::ClassParams = {
		&AMuroBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMuroBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMuroBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMuroBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMuroBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMuroBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMuroBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMuroBase, 900740957);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AMuroBase>()
	{
		return AMuroBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMuroBase(Z_Construct_UClass_AMuroBase, &AMuroBase::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AMuroBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMuroBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
