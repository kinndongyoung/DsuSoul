// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/AngelAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAngelAnimInstance() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_UAngelAnimInstance_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_UAngelAnimInstance();
	SOUL_API UClass* Z_Construct_UClass_UAnimInstance_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UAngelAnimInstance::StaticRegisterNativesUAngelAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UAngelAnimInstance_NoRegister()
	{
		return UAngelAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAngelAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngelAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AngelAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAngelAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAngelAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AngelAnimInstance.h" },
		{ "ModuleRelativePath", "AngelAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAngelAnimInstance_Statics::NewProp_AngelAttack_MetaData[] = {
		{ "AllowPrivateAcces", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "AngelAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAngelAnimInstance_Statics::NewProp_AngelAttack = { "AngelAttack", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAngelAnimInstance, AngelAttack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAngelAnimInstance_Statics::NewProp_AngelAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAngelAnimInstance_Statics::NewProp_AngelAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAngelAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAngelAnimInstance_Statics::NewProp_AngelAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAngelAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAngelAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAngelAnimInstance_Statics::ClassParams = {
		&UAngelAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAngelAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAngelAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAngelAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAngelAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAngelAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAngelAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
<<<<<<< HEAD
	IMPLEMENT_CLASS(UAngelAnimInstance, 161256010);
=======
	IMPLEMENT_CLASS(UAngelAnimInstance, 3792915255);
>>>>>>> LSH
	template<> SOUL_API UClass* StaticClass<UAngelAnimInstance>()
	{
		return UAngelAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAngelAnimInstance(Z_Construct_UClass_UAngelAnimInstance, &UAngelAnimInstance::StaticClass, TEXT("/Script/Soul"), TEXT("UAngelAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAngelAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
