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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_GetInitialHP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_GetInitialSP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP();
	SOUL_API UFunction* Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOUL_API UClass* Z_Construct_UClass_ADevilWeaponBullet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
		{ "Category", "Devil HP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "GetCurrentInitialHP", nullptr, nullptr, sizeof(DevilCharacter_eventGetCurrentInitialHP_Parms), Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Devil SP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "GetCurrentInitialSP", nullptr, nullptr, sizeof(DevilCharacter_eventGetCurrentInitialSP_Parms), Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Devil HP" },
		{ "Comment", "//?\xc7\xb8? hp,sp\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "?\xc7\xb8? hp,sp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "GetInitialHP", nullptr, nullptr, sizeof(DevilCharacter_eventGetInitialHP_Parms), Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetInitialHP_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Devil SP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "GetInitialSP", nullptr, nullptr, sizeof(DevilCharacter_eventGetInitialSP_Parms), Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADevilCharacter_GetInitialSP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADevilCharacter_GetInitialSP_Statics::FuncParams);
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
		{ "Category", "Human HP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "UpdateCurrentHP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Human SP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADevilCharacter, nullptr, "UpdateCurrentSP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponBulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserCameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevilAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DevilAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUD_Devil_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUD_Devil;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevilCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADevilCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialHP, "GetCurrentInitialHP" }, // 2902181243
		{ &Z_Construct_UFunction_ADevilCharacter_GetCurrentInitialSP, "GetCurrentInitialSP" }, // 3982940234
		{ &Z_Construct_UFunction_ADevilCharacter_GetInitialHP, "GetInitialHP" }, // 2606209750
		{ &Z_Construct_UFunction_ADevilCharacter_GetInitialSP, "GetInitialSP" }, // 179970149
		{ &Z_Construct_UFunction_ADevilCharacter_UpdateCurrentHP, "UpdateCurrentHP" }, // 4024838617
		{ &Z_Construct_UFunction_ADevilCharacter_UpdateCurrentSP, "UpdateCurrentSP" }, // 1996321720
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DevilCharacter.h" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_WeaponBulletClass_MetaData[] = {
		{ "Category", "BulletClass" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_WeaponBulletClass = { "WeaponBulletClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, WeaponBulletClass), Z_Construct_UClass_ADevilWeaponBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_WeaponBulletClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_WeaponBulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm = { "UserCameraArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, UserCameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// \xc4\xab?\xde\xb6?//\x09\n// \xc4\xab?\xde\xb6? ??\xc4\xa1?????? ?\xd1\xb1? ??????\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6?\n\xc4\xab?\xde\xb6? ??\xc4\xa1?????? ?\xd1\xb1? ??????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MuzzleOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentSP_MetaData[] = {
		{ "Category", "Devil SP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentSP = { "CurrentSP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, CurrentSP), METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentSP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentSP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_SP_MetaData[] = {
		{ "Category", "Devil SP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_SP = { "Initial_SP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, Initial_SP), METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_SP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_SP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentHp_MetaData[] = {
		{ "Category", "Devil HP" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentHp = { "CurrentHp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, CurrentHp), METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentHp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentHp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_HP_MetaData[] = {
		{ "Category", "Devil HP" },
		{ "Comment", "//?\xc7\xb8? hp,sp - ????\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "?\xc7\xb8? hp,sp - ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_HP = { "Initial_HP", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, Initial_HP), METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "Comment", "// ?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim = { "DevilAnim", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, DevilAnim), Z_Construct_UClass_UDevilAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUD_Devil_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "// HUD \xc5\xac????\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "HUD \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUD_Devil = { "HUD_Devil", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, HUD_Devil), Z_Construct_UClass_AHUD_Devil_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUD_Devil_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUD_Devil_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADevilCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_WeaponBulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MuzzleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentSP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_SP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentHp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Initial_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_HUD_Devil,
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
	IMPLEMENT_CLASS(ADevilCharacter, 436057167);
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
