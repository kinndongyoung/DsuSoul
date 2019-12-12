// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SOUL_Angel_InstallTrigger_generated_h
#error "Angel_InstallTrigger.generated.h already included, missing '#pragma once' in Angel_InstallTrigger.h"
#endif
#define SOUL_Angel_InstallTrigger_generated_h

#define Soul_Source_Soul_Angel_InstallTrigger_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Soul_Source_Soul_Angel_InstallTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Soul_Source_Soul_Angel_InstallTrigger_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAngel_InstallTrigger(); \
	friend struct Z_Construct_UClass_AAngel_InstallTrigger_Statics; \
public: \
	DECLARE_CLASS(AAngel_InstallTrigger, ATriggerSphere, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AAngel_InstallTrigger)


#define Soul_Source_Soul_Angel_InstallTrigger_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAAngel_InstallTrigger(); \
	friend struct Z_Construct_UClass_AAngel_InstallTrigger_Statics; \
public: \
	DECLARE_CLASS(AAngel_InstallTrigger, ATriggerSphere, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AAngel_InstallTrigger)


#define Soul_Source_Soul_Angel_InstallTrigger_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAngel_InstallTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAngel_InstallTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAngel_InstallTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAngel_InstallTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAngel_InstallTrigger(AAngel_InstallTrigger&&); \
	NO_API AAngel_InstallTrigger(const AAngel_InstallTrigger&); \
public:


#define Soul_Source_Soul_Angel_InstallTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAngel_InstallTrigger(AAngel_InstallTrigger&&); \
	NO_API AAngel_InstallTrigger(const AAngel_InstallTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAngel_InstallTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAngel_InstallTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAngel_InstallTrigger)


#define Soul_Source_Soul_Angel_InstallTrigger_h_10_PRIVATE_PROPERTY_OFFSET
#define Soul_Source_Soul_Angel_InstallTrigger_h_7_PROLOG
#define Soul_Source_Soul_Angel_InstallTrigger_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_Angel_InstallTrigger_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_Angel_InstallTrigger_h_10_RPC_WRAPPERS \
	Soul_Source_Soul_Angel_InstallTrigger_h_10_INCLASS \
	Soul_Source_Soul_Angel_InstallTrigger_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_Angel_InstallTrigger_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_Angel_InstallTrigger_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_Angel_InstallTrigger_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_Angel_InstallTrigger_h_10_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_Angel_InstallTrigger_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class AAngel_InstallTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_Angel_InstallTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
