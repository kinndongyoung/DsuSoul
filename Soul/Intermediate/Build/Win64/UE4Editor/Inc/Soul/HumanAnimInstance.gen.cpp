// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/HumanAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHumanAnimInstance() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_UHumanAnimInstance_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_UHumanAnimInstance();
	SOUL_API UClass* Z_Construct_UClass_UAnimInstance_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UHumanAnimInstance::StaticRegisterNativesUHumanAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UHumanAnimInstance_NoRegister()
	{
		return UHumanAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHumanAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHumanAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHumanAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "HumanAnimInstance.h" },
		{ "ModuleRelativePath", "HumanAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHumanAnimInstance_Statics::NewProp_HumanAttack_MetaData[] = {
		{ "AllowPrivateAcces", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "HumanAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHumanAnimInstance_Statics::NewProp_HumanAttack = { "HumanAttack", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHumanAnimInstance, HumanAttack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHumanAnimInstance_Statics::NewProp_HumanAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UHumanAnimInstance_Statics::NewProp_HumanAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHumanAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHumanAnimInstance_Statics::NewProp_HumanAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHumanAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHumanAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHumanAnimInstance_Statics::ClassParams = {
		&UHumanAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHumanAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UHumanAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHumanAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UHumanAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHumanAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHumanAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
<<<<<<< HEAD
	IMPLEMENT_CLASS(UHumanAnimInstance, 906200347);
=======
	IMPLEMENT_CLASS(UHumanAnimInstance, 2848124138);
>>>>>>> LSH
	template<> SOUL_API UClass* StaticClass<UHumanAnimInstance>()
	{
		return UHumanAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHumanAnimInstance(Z_Construct_UClass_UHumanAnimInstance, &UHumanAnimInstance::StaticClass, TEXT("/Script/Soul"), TEXT("UHumanAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHumanAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
