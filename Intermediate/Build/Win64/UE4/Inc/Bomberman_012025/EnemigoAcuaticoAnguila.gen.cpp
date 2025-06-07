// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/EnemigoAcuaticoAnguila.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAcuaticoAnguila() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAcuaticoAnguila_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoAcuaticoAnguila();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AEnemigoAcuaticoAnguila::StaticRegisterNativesAEnemigoAcuaticoAnguila()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAcuaticoAnguila_NoRegister()
	{
		return AEnemigoAcuaticoAnguila::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics
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
	UObject* (*const Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAcuaticoAnguila.h" },
		{ "ModuleRelativePath", "EnemigoAcuaticoAnguila.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "EnemigoAcuaticoAnguila" },
		{ "Comment", "// M?todo virtual para manejar la colisi?n con el jugador\n//virtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,\n//\x09""class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,\n//\x09""bool bFromSweep, const FHitResult& SweepResult);\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoAcuaticoAnguila.h" },
		{ "ToolTip", "M?todo virtual para manejar la colisi?n con el jugador\nvirtual void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,\n      class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,\n      bool bFromSweep, const FHitResult& SweepResult);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAcuaticoAnguila, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAcuaticoAnguila>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::ClassParams = {
		&AEnemigoAcuaticoAnguila::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAcuaticoAnguila()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAcuaticoAnguila_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAcuaticoAnguila, 1018725748);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoAcuaticoAnguila>()
	{
		return AEnemigoAcuaticoAnguila::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAcuaticoAnguila(Z_Construct_UClass_AEnemigoAcuaticoAnguila, &AEnemigoAcuaticoAnguila::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AEnemigoAcuaticoAnguila"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAcuaticoAnguila);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
