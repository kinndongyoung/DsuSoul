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
	SOUL_API UClass* Z_Construct_UClass_ACharacter_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Human_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHuman_PaustSoulCase_NoRegister();
// End Cross Module References
	void AHumanCharacter::StaticRegisterNativesAHumanCharacter()
	{
	}
	UClass* Z_Construct_UClass_AHumanCharacter_NoRegister()
	{
		return AHumanCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AHumanCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDHuman_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDHuman;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pt_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pt_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerCollect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerCollect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHumanCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HumanCharacter.h" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUDHuman_MetaData[] = {
		{ "Category", "HUD" },
		{ "Comment", "// HUD \xc5\xac????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "HUD \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUDHuman = { "HUDHuman", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, HUDHuman), Z_Construct_UClass_AHUD_Human_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUDHuman_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUDHuman_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger_MetaData[] = {
		{ "Category", "Trigger" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger = { "pt_Trigger", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, pt_Trigger), Z_Construct_UClass_AHuman_PaustSoulCase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect_MetaData[] = {
		{ "Category", "Install" },
		{ "Comment", "// ??\xc8\xa5 ???? ????\n" },
		{ "ModuleRelativePath", "HumanCharacter.h" },
		{ "ToolTip", "??\xc8\xa5 ???? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect = { "PerCollect", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanCharacter, PerCollect), METADATA_PARAMS(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHumanCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_HUDHuman,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_pt_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanCharacter_Statics::NewProp_PerCollect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHumanCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHumanCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHumanCharacter_Statics::ClassParams = {
		&AHumanCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHumanCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AHumanCharacter, 2519899941);
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
