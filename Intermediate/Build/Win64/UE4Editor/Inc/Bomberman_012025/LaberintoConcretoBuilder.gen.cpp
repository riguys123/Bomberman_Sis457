// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/LaberintoConcretoBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoConcretoBuilder() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ALaberintoConcretoBuilder_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ALaberintoConcretoBuilder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UILaberinto_NoRegister();
// End Cross Module References
	void ALaberintoConcretoBuilder::StaticRegisterNativesALaberintoConcretoBuilder()
	{
	}
	UClass* Z_Construct_UClass_ALaberintoConcretoBuilder_NoRegister()
	{
		return ALaberintoConcretoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ALaberintoConcretoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALaberintoConcretoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALaberintoConcretoBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//UStaticMesh* Bloque_PadreMesh;\n" },
		{ "IncludePath", "LaberintoConcretoBuilder.h" },
		{ "ModuleRelativePath", "LaberintoConcretoBuilder.h" },
		{ "ToolTip", "UStaticMesh* Bloque_PadreMesh;" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoConcretoBuilder_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UILaberinto_NoRegister, (int32)VTABLE_OFFSET(ALaberintoConcretoBuilder, IILaberinto), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALaberintoConcretoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoConcretoBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoConcretoBuilder_Statics::ClassParams = {
		&ALaberintoConcretoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALaberintoConcretoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoConcretoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALaberintoConcretoBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALaberintoConcretoBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALaberintoConcretoBuilder, 3833742999);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ALaberintoConcretoBuilder>()
	{
		return ALaberintoConcretoBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALaberintoConcretoBuilder(Z_Construct_UClass_ALaberintoConcretoBuilder, &ALaberintoConcretoBuilder::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ALaberintoConcretoBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoConcretoBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
