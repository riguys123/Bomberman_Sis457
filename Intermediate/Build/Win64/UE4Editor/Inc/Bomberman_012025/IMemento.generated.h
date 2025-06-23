// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_012025_IMemento_generated_h
#error "IMemento.generated.h already included, missing '#pragma once' in IMemento.h"
#endif
#define BOMBERMAN_012025_IMemento_generated_h

#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_SPARSE_DATA
#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_RPC_WRAPPERS
#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_012025_API UIMemento(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMemento) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_012025_API, UIMemento); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMemento); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOMBERMAN_012025_API UIMemento(UIMemento&&); \
	BOMBERMAN_012025_API UIMemento(const UIMemento&); \
public:


#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMAN_012025_API UIMemento(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BOMBERMAN_012025_API UIMemento(UIMemento&&); \
	BOMBERMAN_012025_API UIMemento(const UIMemento&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMAN_012025_API, UIMemento); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIMemento); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIMemento)


#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIMemento(); \
	friend struct Z_Construct_UClass_UIMemento_Statics; \
public: \
	DECLARE_CLASS(UIMemento, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Bomberman_012025"), BOMBERMAN_012025_API) \
	DECLARE_SERIALIZER(UIMemento)


#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_GENERATED_UINTERFACE_BODY() \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_GENERATED_UINTERFACE_BODY() \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIMemento() {} \
public: \
	typedef UIMemento UClassType; \
	typedef IIMemento ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIMemento() {} \
public: \
	typedef UIMemento UClassType; \
	typedef IIMemento ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_10_PROLOG
#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_SPARSE_DATA \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_RPC_WRAPPERS \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_SPARSE_DATA \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_012025_API UClass* StaticClass<class UIMemento>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_012025_Source_Bomberman_012025_Public_IMemento_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
