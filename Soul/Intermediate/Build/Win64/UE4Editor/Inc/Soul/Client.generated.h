// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUL_Client_generated_h
#error "Client.generated.h already included, missing '#pragma once' in Client.h"
#endif
#define SOUL_Client_generated_h

#define Soul_Source_Soul_Client_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAccessServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AccessServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToSend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Server_SendString(Z_Param_ToSend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartUDPSender) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_YourChosenSocketName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TheIP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ThePort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartUDPSender(Z_Param_YourChosenSocketName,Z_Param_TheIP,Z_Param_ThePort); \
		P_NATIVE_END; \
	}


#define Soul_Source_Soul_Client_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAccessServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AccessServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ToSend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->Server_SendString(Z_Param_ToSend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartUDPSender) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_YourChosenSocketName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TheIP); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ThePort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->StartUDPSender(Z_Param_YourChosenSocketName,Z_Param_TheIP,Z_Param_ThePort); \
		P_NATIVE_END; \
	}


#define Soul_Source_Soul_Client_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAClient(); \
	friend struct Z_Construct_UClass_AClient_Statics; \
public: \
	DECLARE_CLASS(AClient, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AClient)


#define Soul_Source_Soul_Client_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAClient(); \
	friend struct Z_Construct_UClass_AClient_Statics; \
public: \
	DECLARE_CLASS(AClient, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(AClient)


#define Soul_Source_Soul_Client_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClient(AClient&&); \
	NO_API AClient(const AClient&); \
public:


#define Soul_Source_Soul_Client_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AClient(AClient&&); \
	NO_API AClient(const AClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AClient)


#define Soul_Source_Soul_Client_h_18_PRIVATE_PROPERTY_OFFSET
#define Soul_Source_Soul_Client_h_15_PROLOG
#define Soul_Source_Soul_Client_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_Client_h_18_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_Client_h_18_RPC_WRAPPERS \
	Soul_Source_Soul_Client_h_18_INCLASS \
	Soul_Source_Soul_Client_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_Client_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_Client_h_18_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_Client_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_Client_h_18_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_Client_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Client."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class AClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_Client_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
