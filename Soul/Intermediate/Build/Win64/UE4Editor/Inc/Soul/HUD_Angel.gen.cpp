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
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Soul();
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Angel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Angel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Angel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Angel_Statics::ClassParams = {
		&AHUD_Angel::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AHUD_Angel, 2960390842);
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
