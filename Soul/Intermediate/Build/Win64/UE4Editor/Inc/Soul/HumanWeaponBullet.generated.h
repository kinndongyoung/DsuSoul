// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHumanCharacter;
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SOUL_HumanWeaponBullet_generated_h
#error "HumanWeaponBullet.generated.h already included, missing '#pragma once' in HumanWeaponBullet.h"
#endif
#define SOUL_HumanWeaponBullet_generated_h

#define Soul_Source_Soul_HumanWeaponBullet_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireActor) \
	{ \
		P_GET_OBJECT(AHumanCharacter,Z_Param_pt_FireChar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireActor(Z_Param_pt_FireChar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Soul_Source_Soul_HumanWeaponBullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireActor) \
	{ \
		P_GET_OBJECT(AHumanCharacter,Z_Param_pt_FireChar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FireActor(Z_Param_pt_FireChar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Soul_Source_Soul_HumanWeaponBullet_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHumanWeaponBullet(); \
	friend struct Z_Construct_UClass_AHumanWeaponBullet_Statics; \
public: \
	DECLARE_CLASS(AHumanWeaponBullet, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AHumanWeaponBullet)


#define Soul_Source_Soul_HumanWeaponBullet_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAHumanWeaponBullet(); \
	friend struct Z_Construct_UClass_AHumanWeaponBullet_Statics; \
public: \
	DECLARE_CLASS(AHumanWeaponBullet, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AHumanWeaponBullet)


#define Soul_Source_Soul_HumanWeaponBullet_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHumanWeaponBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHumanWeaponBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHumanWeaponBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHumanWeaponBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHumanWeaponBullet(AHumanWeaponBullet&&); \
	NO_API AHumanWeaponBullet(const AHumanWeaponBullet&); \
public:


#define Soul_Source_Soul_HumanWeaponBullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHumanWeaponBullet(AHumanWeaponBullet&&); \
	NO_API AHumanWeaponBullet(const AHumanWeaponBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHumanWeaponBullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHumanWeaponBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHumanWeaponBullet)


#define Soul_Source_Soul_HumanWeaponBullet_h_10_PRIVATE_PROPERTY_OFFSET
#define Soul_Source_Soul_HumanWeaponBullet_h_7_PROLOG
#define Soul_Source_Soul_HumanWeaponBullet_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_HumanWeaponBullet_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_HumanWeaponBullet_h_10_RPC_WRAPPERS \
	Soul_Source_Soul_HumanWeaponBullet_h_10_INCLASS \
	Soul_Source_Soul_HumanWeaponBullet_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_HumanWeaponBullet_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_HumanWeaponBullet_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_HumanWeaponBullet_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_HumanWeaponBullet_h_10_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_HumanWeaponBullet_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class AHumanWeaponBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_HumanWeaponBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
