// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/ILaberintoBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeILaberintoBuilder() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UILaberintoBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void UILaberintoBuilder::StaticRegisterNativesUILaberintoBuilder()
	{
	}
	UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister()
	{
		return UILaberintoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UILaberintoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UILaberintoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UILaberintoBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ILaberintoBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UILaberintoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IILaberintoBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UILaberintoBuilder_Statics::ClassParams = {
		&UILaberintoBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UILaberintoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UILaberintoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UILaberintoBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UILaberintoBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UILaberintoBuilder, 3553084262);
	template<> BOMBERMAN_012025_API UClass* StaticClass<UILaberintoBuilder>()
	{
		return UILaberintoBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UILaberintoBuilder(Z_Construct_UClass_UILaberintoBuilder, &UILaberintoBuilder::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("UILaberintoBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UILaberintoBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
