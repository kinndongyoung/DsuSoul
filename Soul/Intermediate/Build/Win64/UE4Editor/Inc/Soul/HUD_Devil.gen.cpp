// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/HUD_Devil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_Devil() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AHUD_Devil_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHUD_Devil();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Soul();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AHUD_Devil::StaticRegisterNativesAHUD_Devil()
	{
	}
	UClass* Z_Construct_UClass_AHUD_Devil_NoRegister()
	{
		return AHUD_Devil::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_Devil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_Bar_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass_Bar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Devil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Devil_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_Devil.h" },
		{ "ModuleRelativePath", "HUD_Devil.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Devil_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Category", "Human_UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD_Devil.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Devil_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD_Devil, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHUD_Devil_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHUD_Devil_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Devil_Statics::NewProp_WidgetClass_Bar_MetaData[] = {
		{ "BluePrintProtected", "true" },
		{ "Category", "Devil HP SP" },
		{ "ModuleRelativePath", "HUD_Devil.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Devil_Statics::NewProp_WidgetClass_Bar = { "WidgetClass_Bar", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD_Devil, WidgetClass_Bar), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AHUD_Devil_Statics::NewProp_WidgetClass_Bar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHUD_Devil_Statics::NewProp_WidgetClass_Bar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Devil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Devil_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Devil_Statics::NewProp_WidgetClass_Bar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Devil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Devil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Devil_Statics::ClassParams = {
		&AHUD_Devil::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHUD_Devil_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHUD_Devil_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHUD_Devil_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHUD_Devil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUD_Devil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHUD_Devil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUD_Devil, 659151361);
	template<> SOUL_API UClass* StaticClass<AHUD_Devil>()
	{
		return AHUD_Devil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUD_Devil(Z_Construct_UClass_AHUD_Devil, &AHUD_Devil::StaticClass, TEXT("/Script/Soul"), TEXT("AHUD_Devil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_Devil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
