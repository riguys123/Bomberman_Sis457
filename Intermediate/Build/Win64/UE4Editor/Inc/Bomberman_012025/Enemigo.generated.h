// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BOMBERMAN_012025_Enemigo_generated_h
#error "Enemigo.generated.h already included, missing '#pragma once' in Enemigo.h"
#endif
#define BOMBERMAN_012025_Enemigo_generated_h

#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_SPARSE_DATA
#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_012025"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman_012025"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public:


#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemigo)


#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MallaEnemigo() { return STRUCT_OFFSET(AEnemigo, MallaEnemigo); } \
	FORCEINLINE static uint32 __PPO__MeshEnemigo() { return STRUCT_OFFSET(AEnemigo, MeshEnemigo); } \
	FORCEINLINE static uint32 __PPO__ParticleSystem() { return STRUCT_OFFSET(AEnemigo, ParticleSystem); }


#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_12_PROLOG
#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_PRIVATE_PROPERTY_OFFSET \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_SPARSE_DATA \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_RPC_WRAPPERS \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_INCLASS \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_PRIVATE_PROPERTY_OFFSET \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_SPARSE_DATA \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_INCLASS_NO_PURE_DECLS \
	Bomberman_012025_Source_Bomberman_012025_Enemigo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class AEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_012025_Source_Bomberman_012025_Enemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
