// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/HumanWeaponBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHumanWeaponBullet() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AHumanWeaponBullet_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHumanWeaponBullet();
	SOUL_API UClass* Z_Construct_UClass_ABullet_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UClass* Z_Construct_UClass_AHumanCharacter_NoRegister();
// End Cross Module References
	void AHumanWeaponBullet::StaticRegisterNativesAHumanWeaponBullet()
	{
	}
	UClass* Z_Construct_UClass_AHumanWeaponBullet_NoRegister()
	{
		return AHumanWeaponBullet::StaticClass();
	}
	struct Z_Construct_UClass_AHumanWeaponBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHumanWeaponBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABullet_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanWeaponBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HumanWeaponBullet.h" },
		{ "ModuleRelativePath", "HumanWeaponBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar_MetaData[] = {
		{ "Category", "HumanActor" },
		{ "ModuleRelativePath", "HumanWeaponBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar = { "HumanChar", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanWeaponBullet, HumanChar), Z_Construct_UClass_AHumanCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHumanWeaponBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHumanWeaponBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHumanWeaponBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHumanWeaponBullet_Statics::ClassParams = {
		&AHumanWeaponBullet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHumanWeaponBullet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHumanWeaponBullet_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHumanWeaponBullet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHumanWeaponBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHumanWeaponBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHumanWeaponBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHumanWeaponBullet, 4200524676);
	template<> SOUL_API UClass* StaticClass<AHumanWeaponBullet>()
	{
		return AHumanWeaponBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHumanWeaponBullet(Z_Construct_UClass_AHumanWeaponBullet, &AHumanWeaponBullet::StaticClass, TEXT("/Script/Soul"), TEXT("AHumanWeaponBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHumanWeaponBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
