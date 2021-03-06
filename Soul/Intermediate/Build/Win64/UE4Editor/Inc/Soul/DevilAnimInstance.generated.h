// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUL_DevilAnimInstance_generated_h
#error "DevilAnimInstance.generated.h already included, missing '#pragma once' in DevilAnimInstance.h"
#endif
#define SOUL_DevilAnimInstance_generated_h

#define Soul_Source_Soul_DevilAnimInstance_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_Attack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_Attack(); \
		P_NATIVE_END; \
	}


#define Soul_Source_Soul_DevilAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_Attack) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_Attack(); \
		P_NATIVE_END; \
	}


#define Soul_Source_Soul_DevilAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDevilAnimInstance(); \
	friend struct Z_Construct_UClass_UDevilAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDevilAnimInstance, UAnimInstance_Parent, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(UDevilAnimInstance)


#define Soul_Source_Soul_DevilAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDevilAnimInstance(); \
	friend struct Z_Construct_UClass_UDevilAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDevilAnimInstance, UAnimInstance_Parent, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(UDevilAnimInstance)


#define Soul_Source_Soul_DevilAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDevilAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDevilAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDevilAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDevilAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDevilAnimInstance(UDevilAnimInstance&&); \
	NO_API UDevilAnimInstance(const UDevilAnimInstance&); \
public:


#define Soul_Source_Soul_DevilAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDevilAnimInstance(UDevilAnimInstance&&); \
	NO_API UDevilAnimInstance(const UDevilAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDevilAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDevilAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDevilAnimInstance)


#define Soul_Source_Soul_DevilAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET
#define Soul_Source_Soul_DevilAnimInstance_h_9_PROLOG
#define Soul_Source_Soul_DevilAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_DevilAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_DevilAnimInstance_h_12_RPC_WRAPPERS \
	Soul_Source_Soul_DevilAnimInstance_h_12_INCLASS \
	Soul_Source_Soul_DevilAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_DevilAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_DevilAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_DevilAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_DevilAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_DevilAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class UDevilAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_DevilAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
