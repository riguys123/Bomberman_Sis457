// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025_Bomberman_012025Character_generated_h
#error "Bomberman_012025Character.generated.h already included, missing '#pragma once' in Bomberman_012025Character.h"
#endif
#define BOMBERMAN_012025_Bomberman_012025Character_generated_h

#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_SPARSE_DATA
#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInputColocarBomba); \
	DECLARE_FUNCTION(execSetVida); \
	DECLARE_FUNCTION(execRestaurarEstadoJugador);


#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInputColocarBomba); \
	DECLARE_FUNCTION(execSetVida); \
	DECLARE_FUNCTION(execRestaurarEstadoJugador);


#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomberman_012025Character(); \
	friend struct Z_Construct_UClass_ABomberman_012025Character_Statics; \
public: \
	DECLARE_CLASS(ABomberman_012025Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_012025"), NO_API) \
	DECLARE_SERIALIZER(ABomberman_012025Character) \
	virtual UObject* _getUObject() const override { return const_cast<ABomberman_012025Character*>(this); }


#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABomberman_012025Character(); \
	friend struct Z_Construct_UClass_ABomberman_012025Character_Statics; \
public: \
	DECLARE_CLASS(ABomberman_012025Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_012025"), NO_API) \
	DECLARE_SERIALIZER(ABomberman_012025Character) \
	virtual UObject* _getUObject() const override { return const_cast<ABomberman_012025Character*>(this); }


#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomberman_012025Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomberman_012025Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomberman_012025Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomberman_012025Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomberman_012025Character(ABomberman_012025Character&&); \
	NO_API ABomberman_012025Character(const ABomberman_012025Character&); \
public:


#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomberman_012025Character(ABomberman_012025Character&&); \
	NO_API ABomberman_012025Character(const ABomberman_012025Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomberman_012025Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomberman_012025Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomberman_012025Character)


#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABomberman_012025Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABomberman_012025Character, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CuidadorJugador() { return STRUCT_OFFSET(ABomberman_012025Character, CuidadorJugador); }


#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_15_PROLOG
#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_PRIVATE_PROPERTY_OFFSET \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_SPARSE_DATA \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_RPC_WRAPPERS \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_INCLASS \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_PRIVATE_PROPERTY_OFFSET \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_SPARSE_DATA \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_INCLASS_NO_PURE_DECLS \
	Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class ABomberman_012025Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_012025_Source_Bomberman_012025_Bomberman_012025Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
