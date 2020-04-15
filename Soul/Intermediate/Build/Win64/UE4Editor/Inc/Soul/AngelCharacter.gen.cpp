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
	SOUL_API UClass* Z_Construct_UClass_AHUD_Angel_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AAngel_InstallTrigger_NoRegister();
// End Cross Module References
	void AAngelCharacter::StaticRegisterNativesAAngelCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAngelCharacter_NoRegister()
	{
		return AAngelCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAngelCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAngelCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AngelCharacter.h" },
		{ "ModuleRelativePath", "AngelCharacter.h" },
	};
#endif
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
		nullptr,
		Z_Construct_UClass_AAngelCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AAngelCharacter, 1163884777);
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
