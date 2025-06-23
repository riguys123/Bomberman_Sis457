// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025_IBomba_generated_h
#error "IBomba.generated.h already included, missing '#pragma once' in IBomba.h"
#endif
#define BOMBERMAN_012025_IBomba_generated_h

#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_SPARSE_DATA
#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_RPC_WRAPPERS
#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_012025_API UIBomba(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIBomba) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_012025_API, UIBomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIBomba); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOMBERMAN_012025_API UIBomba(UIBomba&&); \
	BOMBERMAN_012025_API UIBomba(const UIBomba&); \
public:


#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_012025_API UIBomba(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOMBERMAN_012025_API UIBomba(UIBomba&&); \
	BOMBERMAN_012025_API UIBomba(const UIBomba&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_012025_API, UIBomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIBomba); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIBomba)


#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIBomba(); \
	friend struct Z_Construct_UClass_UIBomba_Statics; \
public: \
	DECLARE_CLASS(UIBomba, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Bomberman_012025"), BOMBERMAN_012025_API) \
	DECLARE_SERIALIZER(UIBomba)


#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_GENERATED_UINTERFACE_BODY() \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_GENERATED_UINTERFACE_BODY() \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIBomba() {} \
public: \
	typedef UIBomba UClassType; \
	typedef IIBomba ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIBomba() {} \
public: \
	typedef UIBomba UClassType; \
	typedef IIBomba ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_10_PROLOG
#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_SPARSE_DATA \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_RPC_WRAPPERS \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_SPARSE_DATA \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class UIBomba>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_012025_Source_Bomberman_012025_Public_IBomba_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
