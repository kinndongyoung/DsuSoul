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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Devil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Devil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_Devil.h" },
		{ "ModuleRelativePath", "HUD_Devil.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Devil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Devil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Devil_Statics::ClassParams = {
		&AHUD_Devil::StaticClass,
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
	IMPLEMENT_CLASS(AHUD_Devil, 619879585);
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
