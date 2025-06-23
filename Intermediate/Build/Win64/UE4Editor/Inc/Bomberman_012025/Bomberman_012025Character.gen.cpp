// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman_012025/Bomberman_012025Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberman_012025Character() {}
// Cross Module References
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberman_012025Character_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberman_012025Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Bomberman_012025();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomba_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AInvokerBombManager_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_AComandoColocarBomba_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_ACuidadorJugador_NoRegister();
	BOMBERMAN_012025_API UClass* Z_Construct_UClass_UIOriginador_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABomberman_012025Character::execInputColocarBomba)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputColocarBomba();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABomberman_012025Character::execSetVida)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NuevaVida);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVida(Z_Param_NuevaVida);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABomberman_012025Character::execRestaurarEstadoJugador)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestaurarEstadoJugador();
		P_NATIVE_END;
	}
	void ABomberman_012025Character::StaticRegisterNativesABomberman_012025Character()
	{
		UClass* Class = ABomberman_012025Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InputColocarBomba", &ABomberman_012025Character::execInputColocarBomba },
			{ "RestaurarEstadoJugador", &ABomberman_012025Character::execRestaurarEstadoJugador },
			{ "SetVida", &ABomberman_012025Character::execSetVida },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABomberman_012025Character_InputColocarBomba_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomberman_012025Character_InputColocarBomba_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberman_012025Character_InputColocarBomba_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberman_012025Character, nullptr, "InputColocarBomba", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomberman_012025Character_InputColocarBomba_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberman_012025Character_InputColocarBomba_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomberman_012025Character_InputColocarBomba()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomberman_012025Character_InputColocarBomba_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABomberman_012025Character_RestaurarEstadoJugador_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomberman_012025Character_RestaurarEstadoJugador_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberman_012025Character_RestaurarEstadoJugador_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberman_012025Character, nullptr, "RestaurarEstadoJugador", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomberman_012025Character_RestaurarEstadoJugador_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberman_012025Character_RestaurarEstadoJugador_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomberman_012025Character_RestaurarEstadoJugador()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomberman_012025Character_RestaurarEstadoJugador_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics
	{
		struct Bomberman_012025Character_eventSetVida_Parms
		{
			int32 NuevaVida;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NuevaVida;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::NewProp_NuevaVida = { "NuevaVida", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Bomberman_012025Character_eventSetVida_Parms, NuevaVida), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::NewProp_NuevaVida,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberman_012025Character, nullptr, "SetVida", nullptr, nullptr, sizeof(Bomberman_012025Character_eventSetVida_Parms), Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABomberman_012025Character_SetVida()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABomberman_012025Character_SetVida_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABomberman_012025Character_NoRegister()
	{
		return ABomberman_012025Character::StaticClass();
	}
	struct Z_Construct_UClass_ABomberman_012025Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClaseBomba_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClaseBomba;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvokerBombManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvokerBombManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComandoColocarBombaInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComandoColocarBombaInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vida_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Vida;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuidadorJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CuidadorJugador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberman_012025Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman_012025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABomberman_012025Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberman_012025Character_InputColocarBomba, "InputColocarBomba" }, // 165692229
		{ &Z_Construct_UFunction_ABomberman_012025Character_RestaurarEstadoJugador, "RestaurarEstadoJugador" }, // 12468243
		{ &Z_Construct_UFunction_ABomberman_012025Character_SetVida, "SetVida" }, // 1054530005
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Bomberman_012025Character.h" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ClaseBomba_MetaData[] = {
		{ "Category", "Bomba" },
		{ "Comment", "//--------------------------------------------------------------------------------COMAND\n// Clase de bomba que se va a colocar (se asigna en el editor o por c?digo)\n" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
		{ "ToolTip", "--------------------------------------------------------------------------------COMAND\n Clase de bomba que se va a colocar (se asigna en el editor o por c?digo)" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ClaseBomba = { "ClaseBomba", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, ClaseBomba), Z_Construct_UClass_ABomba_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ClaseBomba_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ClaseBomba_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_InvokerBombManager_MetaData[] = {
		{ "Comment", "// Invoker para comandos de bomba\n" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
		{ "ToolTip", "Invoker para comandos de bomba" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_InvokerBombManager = { "InvokerBombManager", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, InvokerBombManager), Z_Construct_UClass_AInvokerBombManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_InvokerBombManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_InvokerBombManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ComandoColocarBombaInstance_MetaData[] = {
		{ "Comment", "// Comando concreto para colocar bomba\n" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
		{ "ToolTip", "Comando concreto para colocar bomba" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ComandoColocarBombaInstance = { "ComandoColocarBombaInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, ComandoColocarBombaInstance), Z_Construct_UClass_AComandoColocarBomba_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ComandoColocarBombaInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ComandoColocarBombaInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_Vida_MetaData[] = {
		{ "Category", "Estado" },
		{ "Comment", "//--------------------------------------------------------------MEMENTO\n// Variables para guardar/restaurar\n" },
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
		{ "ToolTip", "--------------------------------------------------------------MEMENTO\n Variables para guardar/restaurar" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_Vida = { "Vida", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, Vida), METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_Vida_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_Vida_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CuidadorJugador_MetaData[] = {
		{ "ModuleRelativePath", "Bomberman_012025Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CuidadorJugador = { "CuidadorJugador", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABomberman_012025Character, CuidadorJugador), Z_Construct_UClass_ACuidadorJugador_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CuidadorJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CuidadorJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberman_012025Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ClaseBomba,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_InvokerBombManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_ComandoColocarBombaInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_Vida,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberman_012025Character_Statics::NewProp_CuidadorJugador,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABomberman_012025Character_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIOriginador_NoRegister, (int32)VTABLE_OFFSET(ABomberman_012025Character, IIOriginador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberman_012025Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberman_012025Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABomberman_012025Character_Statics::ClassParams = {
		&ABomberman_012025Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABomberman_012025Character_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomberman_012025Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberman_012025Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberman_012025Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABomberman_012025Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABomberman_012025Character, 2591820367);
	template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberman_012025Character>()
	{
		return ABomberman_012025Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABomberman_012025Character(Z_Construct_UClass_ABomberman_012025Character, &ABomberman_012025Character::StaticClass, TEXT("/Script/Bomberman_012025"), TEXT("ABomberman_012025Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberman_012025Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
