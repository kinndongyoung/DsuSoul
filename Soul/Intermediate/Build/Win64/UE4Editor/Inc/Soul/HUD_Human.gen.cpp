// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/HUD_Human.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_Human() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AHUD_Human_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Human();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AHUD_Human::StaticRegisterNativesAHUD_Human()
	{
	}
	UClass* Z_Construct_UClass_AHUD_Human_NoRegister()
	{
		return AHUD_Human::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_Human_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_CollectBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget_CollectBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_CollectBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass_CollectBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Human_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Human_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_Human.h" },
		{ "ModuleRelativePath", "HUD_Human.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Human_Statics::NewProp_CurrentWidget_CollectBar_MetaData[] = {
		{ "Category", "Angel_UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_Human.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Human_Statics::NewProp_CurrentWidget_CollectBar = { "CurrentWidget_CollectBar", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD_Human, CurrentWidget_CollectBar), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUD_Human_Statics::NewProp_CurrentWidget_CollectBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHUD_Human_Statics::NewProp_CurrentWidget_CollectBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Human_Statics::NewProp_WidgetClass_CollectBar_MetaData[] = {
		{ "Category", "Angel_UI" },
		{ "Comment", "// ??\xc4\xa1 ??\n" },
		{ "ModuleRelativePath", "HUD_Human.h" },
		{ "ToolTip", "??\xc4\xa1 ??" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Human_Statics::NewProp_WidgetClass_CollectBar = { "WidgetClass_CollectBar", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD_Human, WidgetClass_CollectBar), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHUD_Human_Statics::NewProp_WidgetClass_CollectBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHUD_Human_Statics::NewProp_WidgetClass_CollectBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Human_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Human_Statics::NewProp_CurrentWidget_CollectBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Human_Statics::NewProp_WidgetClass_CollectBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Human_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Human>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Human_Statics::ClassParams = {
		&AHUD_Human::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHUD_Human_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHUD_Human_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHUD_Human_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHUD_Human_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUD_Human()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHUD_Human_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUD_Human, 4160537320);
	template<> SOUL_API UClass* StaticClass<AHUD_Human>()
	{
		return AHUD_Human::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUD_Human(Z_Construct_UClass_AHUD_Human, &AHUD_Human::StaticClass, TEXT("/Script/Soul"), TEXT("AHUD_Human"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_Human);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
