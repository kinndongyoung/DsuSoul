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
	SOUL_API UClass* Z_Construct_UClass_AHUD_Devil_NoRegister();
// End Cross Module References
	void ADevilCharacter::StaticRegisterNativesADevilCharacter()
	{
	}
	UClass* Z_Construct_UClass_ADevilCharacter_NoRegister()
	{
		return ADevilCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADevilCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCombo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsComboInputOn_MetaData[];
#endif
		static void NewProp_IsComboInputOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsComboInputOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanNextCombo_MetaData[];
#endif
		static void NewProp_CanNextCombo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanNextCombo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAtttacking_MetaData[];
#endif
		static void NewProp_IsAtttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAtttacking;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DevilCharacter.h" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MaxCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MaxCombo = { "MaxCombo", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, MaxCombo), METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MaxCombo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MaxCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentCombo = { "CurrentCombo", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, CurrentCombo), METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentCombo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsComboInputOn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsComboInputOn_SetBit(void* Obj)
	{
		((ADevilCharacter*)Obj)->IsComboInputOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsComboInputOn = { "IsComboInputOn", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADevilCharacter), &Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsComboInputOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsComboInputOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsComboInputOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CanNextCombo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CanNextCombo_SetBit(void* Obj)
	{
		((ADevilCharacter*)Obj)->CanNextCombo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CanNextCombo = { "CanNextCombo", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADevilCharacter), &Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CanNextCombo_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CanNextCombo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CanNextCombo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsAtttacking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsAtttacking_SetBit(void* Obj)
	{
		((ADevilCharacter*)Obj)->IsAtttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsAtttacking = { "IsAtttacking", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADevilCharacter), &Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsAtttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsAtttacking_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsAtttacking_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_MaxCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CurrentCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsComboInputOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_CanNextCombo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_IsAtttacking,
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
		nullptr,
		Z_Construct_UClass_ADevilCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ADevilCharacter, 3049697756);
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
