// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/IComand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIComand() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIComand_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIComand();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void UIComand::StaticRegisterNativesUIComand()
	{
	}
	UClass* Z_Construct_UClass_UIComand_NoRegister()
	{
		return UIComand::StaticClass();
	}
	struct Z_Construct_UClass_UIComand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIComand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIComand_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IComand.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIComand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIComand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIComand_Statics::ClassParams = {
		&UIComand::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIComand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIComand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIComand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIComand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIComand, 125881899);
	template<> BOMBERMAN_012025_API UClass* StaticClass<UIComand>()
	{
		return UIComand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIComand(Z_Construct_UClass_UIComand, &UIComand::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("UIComand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIComand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
