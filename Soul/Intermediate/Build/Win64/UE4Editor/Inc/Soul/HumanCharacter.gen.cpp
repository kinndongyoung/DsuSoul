// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/HumanCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHumanCharacter() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AHumanCharacter_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHumanCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_GetInitialHP();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_GetInitialSP();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_GetPerCollect();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_Respawn_bar();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOUL_API UClass* Z_Construct_UClass_AHumanWeaponBullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Human_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_UHumanAnimInstance_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHuman_PaustSoulCase_NoRegister();
// End Cross Module References
	void AHumanCharacter::StaticRegisterNativesAHumanCharacter()
	{
		UClass* Class = AHumanCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentInitialHP", &AHumanCharacter::execGetCurrentInitialHP },
			{ "GetCurrentInitialSP", &AHumanCharacter::execGetCurrentInitialSP },
			{ "GetInitialHP", &AHumanCharacter::execGetInitialHP },
			{ "GetInitialSP", &AHumanCharacter::execGetInitialSP },
			{ "GetPerCollect", &AHumanCharacter::execGetPerCollect },
			{ "Respawn_bar", &AHumanCharacter::execRespawn_bar },
			{ "SetMuzzlePos", &AHumanCharacter::execSetMuzzlePos },
			{ "SetMuzzleRot", &AHumanCharacter::execSetMuzzleRot },
			{ "UpdateCurrentHP", &AHumanCharacter::execUpdateCurrentHP },
			{ "UpdateCurrentSP", &AHumanCharacter::execUpdateCurrentSP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics
	{
		struct HumanCharacter_eventGetCurrentInitialHP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanCharacter_eventGetCurrentInitialHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Human HP" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "GetCurrentInitialHP", nullptr, nullptr, sizeof(HumanCharacter_eventGetCurrentInitialHP_Parms), Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics
	{
		struct HumanCharacter_eventGetCurrentInitialSP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanCharacter_eventGetCurrentInitialSP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Human SP" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "GetCurrentInitialSP", nullptr, nullptr, sizeof(HumanCharacter_eventGetCurrentInitialSP_Parms), Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics
	{
		struct HumanCharacter_eventGetInitialHP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanCharacter_eventGetInitialHP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Human HP" },
		{ "Comment", "//?\xce\xb0? hp,sp - ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "?\xce\xb0? hp,sp - ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "GetInitialHP", nullptr, nullptr, sizeof(HumanCharacter_eventGetInitialHP_Parms), Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_GetInitialHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_GetInitialHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics
	{
		struct HumanCharacter_eventGetInitialSP_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanCharacter_eventGetInitialSP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Human SP" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "GetInitialSP", nullptr, nullptr, sizeof(HumanCharacter_eventGetInitialSP_Parms), Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_GetInitialSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_GetInitialSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics
	{
		struct HumanCharacter_eventGetPerCollect_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanCharacter_eventGetPerCollect_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Human PerCollect" },
		{ "Comment", "// ?\xce\xb0? Collect Progress Bar - ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "?\xce\xb0? Collect Progress Bar - ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "GetPerCollect", nullptr, nullptr, sizeof(HumanCharacter_eventGetPerCollect_Parms), Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_GetPerCollect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_GetPerCollect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics
	{
		struct HumanCharacter_eventRespawn_bar_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanCharacter_eventRespawn_bar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Human Death" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "Respawn_bar", nullptr, nullptr, sizeof(HumanCharacter_eventRespawn_bar_Parms), Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_Respawn_bar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_Respawn_bar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics
	{
		struct HumanCharacter_eventSetMuzzlePos_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanCharacter_eventSetMuzzlePos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Muzzle" },
		{ "Comment", "// ?\xd1\xb1? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "?\xd1\xb1? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "SetMuzzlePos", nullptr, nullptr, sizeof(HumanCharacter_eventSetMuzzlePos_Parms), Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics
	{
		struct HumanCharacter_eventSetMuzzleRot_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanCharacter_eventSetMuzzleRot_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Muzzle" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "SetMuzzleRot", nullptr, nullptr, sizeof(HumanCharacter_eventSetMuzzleRot_Parms), Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Human HP" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "UpdateCurrentHP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Human SP" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanCharacter, nullptr, "UpdateCurrentSP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHumanCharacter_NoRegister()
	{
		return AHumanCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHumanCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponBulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerCollect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerCollect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserCameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentSP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Initial_SP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Initial_SP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Initial_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Initial_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUD_Human_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUD_Human;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pt_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pt_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHumanCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHumanCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialHP, "GetCurrentInitialHP" }, // 3524413611
		{ &Z_Construct_UFunction_AHumanCharacter_GetCurrentInitialSP, "GetCurrentInitialSP" }, // 2475780137
		{ &Z_Construct_UFunction_AHumanCharacter_GetInitialHP, "GetInitialHP" }, // 1691863771
		{ &Z_Construct_UFunction_AHumanCharacter_GetInitialSP, "GetInitialSP" }, // 2283423036
		{ &Z_Construct_UFunction_AHumanCharacter_GetPerCollect, "GetPerCollect" }, // 1483609713
		{ &Z_Construct_UFunction_AHumanCharacter_Respawn_bar, "Respawn_bar" }, // 592103454
		{ &Z_Construct_UFunction_AHumanCharacter_SetMuzzlePos, "SetMuzzlePos" }, // 3059232105
		{ &Z_Construct_UFunction_AHumanCharacter_SetMuzzleRot, "SetMuzzleRot" }, // 1336448130
		{ &Z_Construct_UFunction_AHumanCharacter_UpdateCurrentHP, "UpdateCurrentHP" }, // 2074388899
		{ &Z_Construct_UFunction_AHumanCharacter_UpdateCurrentSP, "UpdateCurrentSP" }, // 1936527162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HumanCharacter.h" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_WeaponBulletClass_MetaData[] = {
		{ "Category", "BulletClass" },
		{ "Comment", "// ???? ??\xc5\xb3 ?\xd1\xbe? \xc5\xac????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "???? ??\xc5\xb3 ?\xd1\xbe? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_WeaponBulletClass = { "WeaponBulletClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, WeaponBulletClass), Z_Construct_UClass_AHumanWeaponBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_WeaponBulletClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_WeaponBulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleLocation_MetaData[] = {
		{ "Category", "MuzzleOffseet" },
		{ "Comment", "// ?\xd1\xb1? ??????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "?\xd1\xb1? ??????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, MuzzleLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "MuzzleOffseet" },
		{ "Comment", "// \xc4\xab?\xde\xb6? ??\xc4\xa1?????? ?\xd1\xb1? ??????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ??\xc4\xa1?????? ?\xd1\xb1? ??????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect_MetaData[] = {
		{ "Category", "Install" },
		{ "Comment", "// ??\xc8\xa5 ???? ????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "??\xc8\xa5 ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect = { "PerCollect", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, PerCollect), METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_ammo_MetaData[] = {
		{ "Category", "Human Bullet" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_ammo = { "ammo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, ammo), METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_ammo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_UserCameraArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab?\xde\xb6?//\x09\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_UserCameraArm = { "UserCameraArm", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, UserCameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_UserCameraArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_UserCameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_bar_MetaData[] = {
		{ "Category", "Death_bar" },
		{ "Comment", "//????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_bar = { "bar", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, bar), Z_Construct_UClass_AHUD_Human_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_bar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_bar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentSP_MetaData[] = {
		{ "Category", "Human SP" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentSP = { "CurrentSP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, CurrentSP), METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentSP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentSP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_SP_MetaData[] = {
		{ "Category", "Human SP" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_SP = { "Initial_SP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, Initial_SP), METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_SP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_SP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentHp_MetaData[] = {
		{ "Category", "Human HP" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentHp = { "CurrentHp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, CurrentHp), METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentHp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_HP_MetaData[] = {
		{ "Category", "Human HP" },
		{ "Comment", "//?\xce\xb0? hp,sp - ????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "?\xce\xb0? hp,sp - ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_HP = { "Initial_HP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, Initial_HP), METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HumanAnim_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "Comment", "// ?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HumanAnim = { "HumanAnim", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, HumanAnim), Z_Construct_UClass_UHumanAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HumanAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HumanAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUD_Human_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "// HUD \xc5\xac????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "HUD \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUD_Human = { "HUD_Human", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, HUD_Human), Z_Construct_UClass_AHUD_Human_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUD_Human_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUD_Human_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger = { "pt_Trigger", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, pt_Trigger), Z_Construct_UClass_AHuman_PaustSoulCase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHumanCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_WeaponBulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_MuzzleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_UserCameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_bar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentSP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_SP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_CurrentHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_Initial_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HumanAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUD_Human,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHumanCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHumanCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHumanCharacter_Statics::ClassParams = {
		&AHumanCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHumanCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHumanCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHumanCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHumanCharacter, 1849332560);
	template<> SOUL_API UClass* StaticClass<AHumanCharacter>()
	{
		return AHumanCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHumanCharacter(Z_Construct_UClass_AHumanCharacter, &AHumanCharacter::StaticClass, TEXT("/Script/Soul"), TEXT("AHumanCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHumanCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
