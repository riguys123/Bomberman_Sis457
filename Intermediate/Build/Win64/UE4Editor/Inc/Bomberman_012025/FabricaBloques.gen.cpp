// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Public/FabricaBloques.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaBloques() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFabricaBloques_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFabricaBloques();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	BOMBERMAN_012025_API UEnum* Z_Construct_UEnum_Bomberman_012025_ETipoBloque();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABloque_Padre_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIFabricaBloques_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFabricaBloques::execCrearBloque)
	{
		P_GET_ENUM(ETipoBloque,Z_Param_Tipo);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Posicion);
		P_GET_PROPERTY(FIntProperty,Z_Param_BloqueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABloque_Padre**)Z_Param__Result=P_THIS->CrearBloque(ETipoBloque(Z_Param_Tipo),Z_Param_Out_Posicion,Z_Param_BloqueID);
		P_NATIVE_END;
	}
	void AFabricaBloques::StaticRegisterNativesAFabricaBloques()
	{
		UClass* Class = AFabricaBloques::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearBloque", &AFabricaBloques::execCrearBloque },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics
	{
		struct FabricaBloques_eventCrearBloque_Parms
		{
			ETipoBloque Tipo;
			FVector Posicion;
			int32 BloqueID;
			ABloque_Padre* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Tipo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Tipo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Posicion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Posicion;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloqueID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Tipo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Tipo = { "Tipo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaBloques_eventCrearBloque_Parms, Tipo), Z_Construct_UEnum_Bomberman_012025_ETipoBloque, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Posicion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Posicion = { "Posicion", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaBloques_eventCrearBloque_Parms, Posicion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Posicion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Posicion_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_BloqueID = { "BloqueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaBloques_eventCrearBloque_Parms, BloqueID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FabricaBloques_eventCrearBloque_Parms, ReturnValue), Z_Construct_UClass_ABloque_Padre_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Tipo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Tipo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_Posicion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_BloqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FabricaBloques.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFabricaBloques, nullptr, "CrearBloque", nullptr, nullptr, sizeof(FabricaBloques_eventCrearBloque_Parms), Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFabricaBloques_CrearBloque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFabricaBloques_CrearBloque_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFabricaBloques_NoRegister()
	{
		return AFabricaBloques::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaBloques_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloquesCreados_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloquesCreados_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloquesCreados_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BloquesCreados;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaBloques_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFabricaBloques_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFabricaBloques_CrearBloque, "CrearBloque" }, // 357294156
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaBloques_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaBloques.h" },
		{ "ModuleRelativePath", "Public/FabricaBloques.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados_ValueProp = { "BloquesCreados", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ABloque_Padre_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados_Key_KeyProp = { "BloquesCreados_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados_MetaData[] = {
		{ "Category", "FabricaBloques" },
		{ "Comment", "// Mapa de bloques generados\n" },
		{ "ModuleRelativePath", "Public/FabricaBloques.h" },
		{ "ToolTip", "Mapa de bloques generados" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados = { "BloquesCreados", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFabricaBloques, BloquesCreados), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFabricaBloques_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFabricaBloques_Statics::NewProp_BloquesCreados,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFabricaBloques_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIFabricaBloques_NoRegister, (int32)VTABLE_OFFSET(AFabricaBloques, IIFabricaBloques), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaBloques_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaBloques>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaBloques_Statics::ClassParams = {
		&AFabricaBloques::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFabricaBloques_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloques_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaBloques_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaBloques_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaBloques()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaBloques_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaBloques, 11010177);
	template<> BOMBERMAN_012025_API UClass* StaticClass<AFabricaBloques>()
	{
		return AFabricaBloques::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaBloques(Z_Construct_UClass_AFabricaBloques, &AFabricaBloques::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("AFabricaBloques"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaBloques);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
