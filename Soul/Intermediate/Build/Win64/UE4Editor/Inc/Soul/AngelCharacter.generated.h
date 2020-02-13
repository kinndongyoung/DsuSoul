// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUL_AngelCharacter_generated_h
#error "AngelCharacter.generated.h already included, missing '#pragma once' in AngelCharacter.h"
#endif
#define SOUL_AngelCharacter_generated_h

#define Soul_Source_Soul_AngelCharacter_h_10_RPC_WRAPPERS
#define Soul_Source_Soul_AngelCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Soul_Source_Soul_AngelCharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAngelCharacter(); \
	friend struct Z_Construct_UClass_AAngelCharacter_Statics; \
public: \
	DECLARE_CLASS(AAngelCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AAngelCharacter)


#define Soul_Source_Soul_AngelCharacter_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAAngelCharacter(); \
	friend struct Z_Construct_UClass_AAngelCharacter_Statics; \
public: \
	DECLARE_CLASS(AAngelCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AAngelCharacter)


#define Soul_Source_Soul_AngelCharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAngelCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAngelCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAngelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAngelCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAngelCharacter(AAngelCharacter&&); \
	NO_API AAngelCharacter(const AAngelCharacter&); \
public:


#define Soul_Source_Soul_AngelCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAngelCharacter(AAngelCharacter&&); \
	NO_API AAngelCharacter(const AAngelCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAngelCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAngelCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAngelCharacter)


#define Soul_Source_Soul_AngelCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUD_Angel() { return STRUCT_OFFSET(AAngelCharacter, HUD_Angel); } \
	FORCEINLINE static uint32 __PPO__UserCameraArm() { return STRUCT_OFFSET(AAngelCharacter, UserCameraArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AAngelCharacter, Camera); }


#define Soul_Source_Soul_AngelCharacter_h_7_PROLOG
#define Soul_Source_Soul_AngelCharacter_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_AngelCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_AngelCharacter_h_10_RPC_WRAPPERS \
	Soul_Source_Soul_AngelCharacter_h_10_INCLASS \
	Soul_Source_Soul_AngelCharacter_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_AngelCharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_AngelCharacter_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_AngelCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_AngelCharacter_h_10_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_AngelCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class AAngelCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_AngelCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
