// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/EnemigoAereoMurcielago.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAereoMurcielago() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAereoMurcielago_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAereoMurcielago();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AEnemigoAereoMurcielago::StaticRegisterNativesAEnemigoAereoMurcielago()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAereoMurcielago_NoRegister()
	{
		return AEnemigoAereoMurcielago::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAereoMurcielago_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAereoMurcielago.h" },
		{ "ModuleRelativePath", "EnemigoAereoMurcielago.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "EnemigoAereoMurcielago" },
		{ "Comment", "////UFUNCTION()\n//void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,\n//    class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,\n//    bool bFromSweep, const FHitResult& SweepResult);\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoAereoMurcielago.h" },
		{ "ToolTip", "/UFUNCTION()\nvoid OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,\n    class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,\n    bool bFromSweep, const FHitResult& SweepResult);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAereoMurcielago, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAereoMurcielago>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::ClassParams = {
		&AEnemigoAereoMurcielago::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAereoMurcielago()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAereoMurcielago_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAereoMurcielago, 1074874045);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoAereoMurcielago>()
	{
		return AEnemigoAereoMurcielago::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAereoMurcielago(Z_Construct_UClass_AEnemigoAereoMurcielago, &AEnemigoAereoMurcielago::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AEnemigoAereoMurcielago"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAereoMurcielago);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
