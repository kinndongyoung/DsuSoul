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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAngelAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAngelAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAngelAnimInstance_Statics::ClassParams = {
		&UAngelAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(UAngelAnimInstance, 261392371);
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
