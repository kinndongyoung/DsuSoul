// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/DevilCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevilCharacter() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_ADevilCharacter_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_ADevilCharacter();
	SOUL_API UClass* Z_Construct_UClass_ACharacter_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_GetInitialHP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_GetInitialSP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_Respawn_bar();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP();
	SOUL_API UClass* Z_Construct_UClass_UDevilAnimInstance_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Devil_NoRegister();
// End Cross Module References
	void ADevilCharacter::StaticRegisterNativesADevilCharacter()
	{
		UClass* Class = ADevilCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentInitialHP", &ADevilCharacter::execGetCurrentInitialHP },
			{ "GetCurrentInitialSP", &ADevilCharacter::execGetCurrentInitialSP },
			{ "GetInitialHP", &ADevilCharacter::execGetInitialHP },
			{ "GetInitialSP", &ADevilCharacter::execGetInitialSP },
			{ "Respawn_bar", &ADevilCharacter::execRespawn_bar },
			{ "SetMuzzlePos", &ADevilCharacter::execSetMuzzlePos },
			{ "SetMuzzleRot", &ADevilCharacter::execSetMuzzleRot },
			{ "UpdateCurrentHP", &ADevilCharacter::execUpdateCurrentHP },
			{ "UpdateCurrentSP", &ADevilCharacter::execUpdateCurrentSP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics
	{
		struct DevilCharacter_eventGetCurrentInitialHP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevilCharacter_eventGetCurrentInitialHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "GetCurrentInitialHP", nullptr, nullptr, sizeof(DevilCharacter_eventGetCurrentInitialHP_Parms), Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics
	{
		struct DevilCharacter_eventGetCurrentInitialSP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevilCharacter_eventGetCurrentInitialSP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "GetCurrentInitialSP", nullptr, nullptr, sizeof(DevilCharacter_eventGetCurrentInitialSP_Parms), Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics
	{
		struct DevilCharacter_eventGetInitialHP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevilCharacter_eventGetInitialHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "Comment", "// hp,sp - ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "hp,sp - ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "GetInitialHP", nullptr, nullptr, sizeof(DevilCharacter_eventGetInitialHP_Parms), Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_GetInitialHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics
	{
		struct DevilCharacter_eventGetInitialSP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevilCharacter_eventGetInitialSP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "GetInitialSP", nullptr, nullptr, sizeof(DevilCharacter_eventGetInitialSP_Parms), Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_GetInitialSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics
	{
		struct DevilCharacter_eventRespawn_bar_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevilCharacter_eventRespawn_bar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "Respawn_bar", nullptr, nullptr, sizeof(DevilCharacter_eventRespawn_bar_Parms), Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_Respawn_bar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_Respawn_bar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics
	{
		struct DevilCharacter_eventSetMuzzlePos_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevilCharacter_eventSetMuzzlePos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Muzzle" },
		{ "Comment", "// ?\xd1\xb1? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "?\xd1\xb1? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "SetMuzzlePos", nullptr, nullptr, sizeof(DevilCharacter_eventSetMuzzlePos_Parms), Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics
	{
		struct DevilCharacter_eventSetMuzzleRot_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevilCharacter_eventSetMuzzleRot_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Muzzle" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "SetMuzzleRot", nullptr, nullptr, sizeof(DevilCharacter_eventSetMuzzleRot_Parms), Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "UpdateCurrentHP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "UpdateCurrentSP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADevilCharacter_NoRegister()
	{
		return ADevilCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADevilCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDevil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimDevil;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDDevil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDDevil;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevilCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADevilCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP, "GetCurrentInitialHP" }, // 910358899
		{ &Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP, "GetCurrentInitialSP" }, // 480715678
		{ &Z_Construct_UFunction_ADevilCharacter_GetInitialHP, "GetInitialHP" }, // 2890161690
		{ &Z_Construct_UFunction_ADevilCharacter_GetInitialSP, "GetInitialSP" }, // 3901804747
		{ &Z_Construct_UFunction_ADevilCharacter_Respawn_bar, "Respawn_bar" }, // 3965981116
		{ &Z_Construct_UFunction_ADevilCharacter_SetMuzzlePos, "SetMuzzlePos" }, // 1710617817
		{ &Z_Construct_UFunction_ADevilCharacter_SetMuzzleRot, "SetMuzzleRot" }, // 4192270211
		{ &Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP, "UpdateCurrentHP" }, // 455899303
		{ &Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP, "UpdateCurrentSP" }, // 4216198803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DevilCharacter.h" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_AnimDevil_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "Comment", "// ?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_AnimDevil = { "AnimDevil", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, AnimDevil), Z_Construct_UClass_UDevilAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_AnimDevil_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_AnimDevil_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUDDevil_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "// HUD \xc5\xac????\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "HUD \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUDDevil = { "HUDDevil", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, HUDDevil), Z_Construct_UClass_AHUD_Devil_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUDDevil_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUDDevil_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADevilCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_AnimDevil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUDDevil,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADevilCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADevilCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADevilCharacter_Statics::ClassParams = {
		&ADevilCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADevilCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADevilCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADevilCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADevilCharacter, 1049621113);
	template<> SOUL_API UClass* StaticClass<ADevilCharacter>()
	{
		return ADevilCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADevilCharacter(Z_Construct_UClass_ADevilCharacter, &ADevilCharacter::StaticClass, TEXT("/Script/Soul"), TEXT("ADevilCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADevilCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
