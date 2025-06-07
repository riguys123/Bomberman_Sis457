// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/IFabricaBloques.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFabricaBloques() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIFabricaBloques_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIFabricaBloques();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
// End Cross Module References
	void UIFabricaBloques::StaticRegisterNativesUIFabricaBloques()
	{
	}
	UClass* Z_Construct_UClass_UIFabricaBloques_NoRegister()
	{
		return UIFabricaBloques::StaticClass();
	}
	struct Z_Construct_UClass_UIFabricaBloques_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIFabricaBloques_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIFabricaBloques_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IFabricaBloques.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIFabricaBloques_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIFabricaBloques>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIFabricaBloques_Statics::ClassParams = {
		&UIFabricaBloques::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIFabricaBloques_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIFabricaBloques_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIFabricaBloques()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIFabricaBloques_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIFabricaBloques, 3262067274);
	template<> BOMBERMAN_012025_API UClass* StaticClass<UIFabricaBloques>()
	{
		return UIFabricaBloques::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIFabricaBloques(Z_Construct_UClass_UIFabricaBloques, &UIFabricaBloques::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("UIFabricaBloques"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIFabricaBloques);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
