// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/AngelCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAngelCharacter() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AAngelCharacter_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AAngelCharacter();
	SOUL_API UClass* Z_Construct_UClass_ACharacter_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_GetInitialHP();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_GetInitialSP();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_Respawn_bar();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP();
	SOUL_API UFunction* Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP();
	SOUL_API UClass* Z_Construct_UClass_UAngelAnimInstance_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Angel_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AAngel_InstallTrigger_NoRegister();
// End Cross Module References
	void AAngelCharacter::StaticRegisterNativesAAngelCharacter()
	{
		UClass* Class = AAngelCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentInitialHP", &AAngelCharacter::execGetCurrentInitialHP },
			{ "GetCurrentInitialSP", &AAngelCharacter::execGetCurrentInitialSP },
			{ "GetInitialHP", &AAngelCharacter::execGetInitialHP },
			{ "GetInitialSP", &AAngelCharacter::execGetInitialSP },
			{ "Respawn_bar", &AAngelCharacter::execRespawn_bar },
			{ "SetMuzzlePos", &AAngelCharacter::execSetMuzzlePos },
			{ "SetMuzzleRot", &AAngelCharacter::execSetMuzzleRot },
			{ "UpdateCurrentHP", &AAngelCharacter::execUpdateCurrentHP },
			{ "UpdateCurrentSP", &AAngelCharacter::execUpdateCurrentSP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics
	{
		struct AngelCharacter_eventGetCurrentInitialHP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AngelCharacter_eventGetCurrentInitialHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "GetCurrentInitialHP", nullptr, nullptr, sizeof(AngelCharacter_eventGetCurrentInitialHP_Parms), Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics
	{
		struct AngelCharacter_eventGetCurrentInitialSP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AngelCharacter_eventGetCurrentInitialSP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SP" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "GetCurrentInitialSP", nullptr, nullptr, sizeof(AngelCharacter_eventGetCurrentInitialSP_Parms), Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics
	{
		struct AngelCharacter_eventGetInitialHP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AngelCharacter_eventGetInitialHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "Comment", "// hp,sp - ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
		{ "ToolTip", "hp,sp - ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "GetInitialHP", nullptr, nullptr, sizeof(AngelCharacter_eventGetInitialHP_Parms), Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_GetInitialHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_GetInitialHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics
	{
		struct AngelCharacter_eventGetInitialSP_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AngelCharacter_eventGetInitialSP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SP" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "GetInitialSP", nullptr, nullptr, sizeof(AngelCharacter_eventGetInitialSP_Parms), Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_GetInitialSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_GetInitialSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics
	{
		struct AngelCharacter_eventRespawn_bar_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AngelCharacter_eventRespawn_bar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "Respawn_bar", nullptr, nullptr, sizeof(AngelCharacter_eventRespawn_bar_Parms), Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_Respawn_bar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_Respawn_bar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics
	{
		struct AngelCharacter_eventSetMuzzlePos_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AngelCharacter_eventSetMuzzlePos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Muzzle" },
		{ "Comment", "// ?\xd1\xb1? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
		{ "ToolTip", "?\xd1\xb1? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "SetMuzzlePos", nullptr, nullptr, sizeof(AngelCharacter_eventSetMuzzlePos_Parms), Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics
	{
		struct AngelCharacter_eventSetMuzzleRot_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AngelCharacter_eventSetMuzzleRot_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Muzzle" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "SetMuzzleRot", nullptr, nullptr, sizeof(AngelCharacter_eventSetMuzzleRot_Parms), Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "UpdateCurrentHP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SP" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngelCharacter, nullptr, "UpdateCurrentSP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAngelCharacter_NoRegister()
	{
		return AAngelCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAngelCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimAngel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimAngel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDAngel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDAngel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pt_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pt_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerInstall_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerInstall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAngelCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAngelCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialHP, "GetCurrentInitialHP" }, // 2175344671
		{ &Z_Construct_UFunction_AAngelCharacter_GetCurrentInitialSP, "GetCurrentInitialSP" }, // 1640465971
		{ &Z_Construct_UFunction_AAngelCharacter_GetInitialHP, "GetInitialHP" }, // 3796064186
		{ &Z_Construct_UFunction_AAngelCharacter_GetInitialSP, "GetInitialSP" }, // 4139899207
		{ &Z_Construct_UFunction_AAngelCharacter_Respawn_bar, "Respawn_bar" }, // 1684987477
		{ &Z_Construct_UFunction_AAngelCharacter_SetMuzzlePos, "SetMuzzlePos" }, // 3224664240
		{ &Z_Construct_UFunction_AAngelCharacter_SetMuzzleRot, "SetMuzzleRot" }, // 2470760823
		{ &Z_Construct_UFunction_AAngelCharacter_UpdateCurrentHP, "UpdateCurrentHP" }, // 330291248
		{ &Z_Construct_UFunction_AAngelCharacter_UpdateCurrentSP, "UpdateCurrentSP" }, // 1779894841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAngelCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AngelCharacter.h" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAngelCharacter_Statics::NewProp_AnimAngel_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "Comment", "// ?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????\n" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
		{ "ToolTip", "?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAngelCharacter_Statics::NewProp_AnimAngel = { "AnimAngel", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAngelCharacter, AnimAngel), Z_Construct_UClass_UAngelAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAngelCharacter_Statics::NewProp_AnimAngel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAngelCharacter_Statics::NewProp_AnimAngel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAngelCharacter_Statics::NewProp_HUDAngel_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "// HUD \xc5\xac????\n" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
		{ "ToolTip", "HUD \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAngelCharacter_Statics::NewProp_HUDAngel = { "HUDAngel", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAngelCharacter, HUDAngel), Z_Construct_UClass_AHUD_Angel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAngelCharacter_Statics::NewProp_HUDAngel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAngelCharacter_Statics::NewProp_HUDAngel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAngelCharacter_Statics::NewProp_pt_Trigger_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAngelCharacter_Statics::NewProp_pt_Trigger = { "pt_Trigger", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAngelCharacter, pt_Trigger), Z_Construct_UClass_AAngel_InstallTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAngelCharacter_Statics::NewProp_pt_Trigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAngelCharacter_Statics::NewProp_pt_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAngelCharacter_Statics::NewProp_PerInstall_MetaData[] = {
		{ "Category", "Install" },
		{ "Comment", "// ??\xc4\xa1 ????\n" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
		{ "ToolTip", "??\xc4\xa1 ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAngelCharacter_Statics::NewProp_PerInstall = { "PerInstall", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAngelCharacter, PerInstall), METADATA_PARAMS(Z_Construct_UClass_AAngelCharacter_Statics::NewProp_PerInstall_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAngelCharacter_Statics::NewProp_PerInstall_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAngelCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAngelCharacter_Statics::NewProp_AnimAngel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAngelCharacter_Statics::NewProp_HUDAngel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAngelCharacter_Statics::NewProp_pt_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAngelCharacter_Statics::NewProp_PerInstall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAngelCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAngelCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAngelCharacter_Statics::ClassParams = {
		&AAngelCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAngelCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAngelCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAngelCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAngelCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAngelCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAngelCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAngelCharacter, 3029093335);
	template<> SOUL_API UClass* StaticClass<AAngelCharacter>()
	{
		return AAngelCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAngelCharacter(Z_Construct_UClass_AAngelCharacter, &AAngelCharacter::StaticClass, TEXT("/Script/Soul"), TEXT("AAngelCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAngelCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
