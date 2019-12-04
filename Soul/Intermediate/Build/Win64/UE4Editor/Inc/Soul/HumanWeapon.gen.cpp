// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/HumanWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHumanWeapon() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AHumanWeapon_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AHumanWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Soul();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AHumanWeapon::StaticRegisterNativesAHumanWeapon()
	{
	}
	UClass* Z_Construct_UClass_AHumanWeapon_NoRegister()
	{
		return AHumanWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AHumanWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_SKAR4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon_SKAR4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHumanWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HumanWeapon.h" },
		{ "ModuleRelativePath", "HumanWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanWeapon_Statics::NewProp_Weapon_SKAR4_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HumanWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanWeapon_Statics::NewProp_Weapon_SKAR4 = { "Weapon_SKAR4", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanWeapon, Weapon_SKAR4), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanWeapon_Statics::NewProp_Weapon_SKAR4_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanWeapon_Statics::NewProp_Weapon_SKAR4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHumanWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanWeapon_Statics::NewProp_Weapon_SKAR4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHumanWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHumanWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHumanWeapon_Statics::ClassParams = {
		&AHumanWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHumanWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AHumanWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AHumanWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHumanWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHumanWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHumanWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHumanWeapon, 754615384);
	template<> SOUL_API UClass* StaticClass<AHumanWeapon>()
	{
		return AHumanWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHumanWeapon(Z_Construct_UClass_AHumanWeapon, &AHumanWeapon::StaticClass, TEXT("/Script/Soul"), TEXT("AHumanWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHumanWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
