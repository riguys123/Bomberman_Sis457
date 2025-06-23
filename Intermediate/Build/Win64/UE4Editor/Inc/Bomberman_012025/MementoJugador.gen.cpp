// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/MementoJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMementoJugador() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMementoJugador_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AMementoJugador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIMemento_NoRegister();
// End Cross Module References
	void AMementoJugador::StaticRegisterNativesAMementoJugador()
	{
	}
	UClass* Z_Construct_UClass_AMementoJugador_NoRegister()
	{
		return AMementoJugador::StaticClass();
	}
	struct Z_Construct_UClass_AMementoJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VidaGuardada_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VidaGuardada;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosicionGuardada_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosicionGuardada;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMementoJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMementoJugador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MementoJugador.h" },
		{ "ModuleRelativePath", "Public/MementoJugador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMementoJugador_Statics::NewProp_VidaGuardada_MetaData[] = {
		{ "ModuleRelativePath", "Public/MementoJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMementoJugador_Statics::NewProp_VidaGuardada = { "VidaGuardada", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMementoJugador, VidaGuardada), METADATA_PARAMS(Z_Construct_UClass_AMementoJugador_Statics::NewProp_VidaGuardada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMementoJugador_Statics::NewProp_VidaGuardada_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMementoJugador_Statics::NewProp_PosicionGuardada_MetaData[] = {
		{ "ModuleRelativePath", "Public/MementoJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMementoJugador_Statics::NewProp_PosicionGuardada = { "PosicionGuardada", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMementoJugador, PosicionGuardada), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMementoJugador_Statics::NewProp_PosicionGuardada_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMementoJugador_Statics::NewProp_PosicionGuardada_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMementoJugador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMementoJugador_Statics::NewProp_VidaGuardada,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMementoJugador_Statics::NewProp_PosicionGuardada,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMementoJugador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIMemento_NoRegister, (int32)VTABLE_OFFSET(AMementoJugador, IIMemento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMementoJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMementoJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMementoJugador_Statics::ClassParams = {
		&AMementoJugador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMementoJugador_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMementoJugador_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMementoJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMementoJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMementoJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMementoJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMementoJugador, 4026698444);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AMementoJugador>()
	{
		return AMementoJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMementoJugador(Z_Construct_UClass_AMementoJugador, &AMementoJugador::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AMementoJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMementoJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
