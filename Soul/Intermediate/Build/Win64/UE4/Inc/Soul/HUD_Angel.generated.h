// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUL_HUD_Angel_generated_h
#error "HUD_Angel.generated.h already included, missing '#pragma once' in HUD_Angel.h"
#endif
#define SOUL_HUD_Angel_generated_h

#define Soul_Source_Soul_HUD_Angel_h_10_RPC_WRAPPERS
#define Soul_Source_Soul_HUD_Angel_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Soul_Source_Soul_HUD_Angel_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUD_Angel(); \
	friend struct Z_Construct_UClass_AHUD_Angel_Statics; \
public: \
	DECLARE_CLASS(AHUD_Angel, AHUD_Parent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AHUD_Angel)


#define Soul_Source_Soul_HUD_Angel_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAHUD_Angel(); \
	friend struct Z_Construct_UClass_AHUD_Angel_Statics; \
public: \
	DECLARE_CLASS(AHUD_Angel, AHUD_Parent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AHUD_Angel)


#define Soul_Source_Soul_HUD_Angel_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD_Angel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD_Angel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Angel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Angel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD_Angel(AHUD_Angel&&); \
	NO_API AHUD_Angel(const AHUD_Angel&); \
public:


#define Soul_Source_Soul_HUD_Angel_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD_Angel(AHUD_Angel&&); \
	NO_API AHUD_Angel(const AHUD_Angel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_Angel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_Angel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHUD_Angel)


#define Soul_Source_Soul_HUD_Angel_h_10_PRIVATE_PROPERTY_OFFSET
#define Soul_Source_Soul_HUD_Angel_h_7_PROLOG
#define Soul_Source_Soul_HUD_Angel_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_HUD_Angel_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_HUD_Angel_h_10_RPC_WRAPPERS \
	Soul_Source_Soul_HUD_Angel_h_10_INCLASS \
	Soul_Source_Soul_HUD_Angel_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_HUD_Angel_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_HUD_Angel_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_HUD_Angel_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_HUD_Angel_h_10_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_HUD_Angel_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class AHUD_Angel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_HUD_Angel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
