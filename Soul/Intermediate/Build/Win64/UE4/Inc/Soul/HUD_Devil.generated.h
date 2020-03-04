// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUL_HUD_Devil_generated_h
#error "HUD_Devil.generated.h already included, missing '#pragma once' in HUD_Devil.h"
#endif
#define SOUL_HUD_Devil_generated_h

#define Soul_Source_Soul_HUD_Devil_h_10_RPC_WRAPPERS
#define Soul_Source_Soul_HUD_Devil_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Soul_Source_Soul_HUD_Devil_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUD_Devil(); \
	friend struct Z_Construct_UClass_AHUD_Devil_Statics; \
public: \
	DECLARE_CLASS(AHUD_Devil, AHUD_Parent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AHUD_Devil)


#define Soul_Source_Soul_HUD_Devil_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAHUD_Devil(); \
	friend struct Z_Construct_UClass_AHUD_Devil_Statics; \
public: \
	DECLARE_CLASS(AHUD_Devil, AHUD_Parent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AHUD_Devil)


#define Soul_Source_Soul_HUD_Devil_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD_Devil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD_Devil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Devil); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Devil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD_Devil(AHUD_Devil&&); \
	NO_API AHUD_Devil(const AHUD_Devil&); \
public:


#define Soul_Source_Soul_HUD_Devil_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD_Devil(AHUD_Devil&&); \
	NO_API AHUD_Devil(const AHUD_Devil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Devil); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Devil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHUD_Devil)


#define Soul_Source_Soul_HUD_Devil_h_10_PRIVATE_PROPERTY_OFFSET
#define Soul_Source_Soul_HUD_Devil_h_7_PROLOG
#define Soul_Source_Soul_HUD_Devil_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_HUD_Devil_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_HUD_Devil_h_10_RPC_WRAPPERS \
	Soul_Source_Soul_HUD_Devil_h_10_INCLASS \
	Soul_Source_Soul_HUD_Devil_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_HUD_Devil_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_HUD_Devil_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_HUD_Devil_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_HUD_Devil_h_10_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_HUD_Devil_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class AHUD_Devil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_HUD_Devil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
