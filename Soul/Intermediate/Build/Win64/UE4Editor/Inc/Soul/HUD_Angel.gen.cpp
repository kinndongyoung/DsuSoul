// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/HUD_Angel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_Angel() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AHUD_Angel_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Angel();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AHUD_Angel::StaticRegisterNativesAHUD_Angel()
	{
	}
	UClass* Z_Construct_UClass_AHUD_Angel_NoRegister()
	{
		return AHUD_Angel::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_Angel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_InstallBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget_InstallBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_InstallBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass_InstallBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Angel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Angel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_Angel.h" },
		{ "ModuleRelativePath", "HUD_Angel.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Angel_Statics::NewProp_CurrentWidget_InstallBar_MetaData[] = {
		{ "Category", "Angel_UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_Angel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Angel_Statics::NewProp_CurrentWidget_InstallBar = { "CurrentWidget_InstallBar", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD_Angel, CurrentWidget_InstallBar), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUD_Angel_Statics::NewProp_CurrentWidget_InstallBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHUD_Angel_Statics::NewProp_CurrentWidget_InstallBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Angel_Statics::NewProp_WidgetClass_InstallBar_MetaData[] = {
		{ "Category", "Angel_UI" },
		{ "Comment", "// ??\xc4\xa1 ??\n" },
		{ "ModuleRelativePath", "HUD_Angel.h" },
		{ "ToolTip", "??\xc4\xa1 ??" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Angel_Statics::NewProp_WidgetClass_InstallBar = { "WidgetClass_InstallBar", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD_Angel, WidgetClass_InstallBar), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHUD_Angel_Statics::NewProp_WidgetClass_InstallBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHUD_Angel_Statics::NewProp_WidgetClass_InstallBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Angel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Angel_Statics::NewProp_CurrentWidget_InstallBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Angel_Statics::NewProp_WidgetClass_InstallBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Angel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Angel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Angel_Statics::ClassParams = {
		&AHUD_Angel::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHUD_Angel_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHUD_Angel_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHUD_Angel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHUD_Angel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUD_Angel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHUD_Angel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUD_Angel, 223441073);
	template<> SOUL_API UClass* StaticClass<AHUD_Angel>()
	{
		return AHUD_Angel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUD_Angel(Z_Construct_UClass_AHUD_Angel, &AHUD_Angel::StaticClass, TEXT("/Script/Soul"), TEXT("AHUD_Angel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_Angel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
