// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/DevilAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevilAnimInstance() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_UDevilAnimInstance_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_UDevilAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Soul();
// End Cross Module References
	void UDevilAnimInstance::StaticRegisterNativesUDevilAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UDevilAnimInstance_NoRegister()
	{
		return UDevilAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDevilAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Is_Death_MetaData[];
#endif
		static void NewProp_Is_Death_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Is_Death;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Is_Reload_MetaData[];
#endif
		static void NewProp_Is_Reload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Is_Reload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Is_Walk_MetaData[];
#endif
		static void NewProp_Is_Walk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Is_Walk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFire_MetaData[];
#endif
		static void NewProp_IsFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[];
#endif
		static void NewProp_IsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPawnSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPawnSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDevilAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DevilAnimInstance.h" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Death_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Death_SetBit(void* Obj)
	{
		((UDevilAnimInstance*)Obj)->Is_Death = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Death = { "Is_Death", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDevilAnimInstance), &Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Death_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Death_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Death_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Reload_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Reload_SetBit(void* Obj)
	{
		((UDevilAnimInstance*)Obj)->Is_Reload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Reload = { "Is_Reload", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDevilAnimInstance), &Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Reload_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Reload_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Reload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Walk_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "Comment", "//???? ????\n" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Walk_SetBit(void* Obj)
	{
		((UDevilAnimInstance*)Obj)->Is_Walk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Walk = { "Is_Walk", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDevilAnimInstance), &Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Walk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Walk_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Walk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsFire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsFire_SetBit(void* Obj)
	{
		((UDevilAnimInstance*)Obj)->IsFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsFire = { "IsFire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDevilAnimInstance), &Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "Comment", "// Ground ??????\xc6\xae?? ?\xd6\xb4\xcf\xb8??\xcc\xbc? ??\xc8\xaf ??\n// CurrentPawnSpeed =< 0 : Idle\n// CurrentPawnSpeed  > 0 : Walk\n" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
		{ "ToolTip", "Ground ??????\xc6\xae?? ?\xd6\xb4\xcf\xb8??\xcc\xbc? ??\xc8\xaf ??\nCurrentPawnSpeed =< 0 : Idle\nCurrentPawnSpeed  > 0 : Walk" },
	};
#endif
	void Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UDevilAnimInstance*)Obj)->IsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDevilAnimInstance), &Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsInAir_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_CurrentPawnSpeed = { "CurrentPawnSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDevilAnimInstance, CurrentPawnSpeed), METADATA_PARAMS(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_CurrentPawnSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDevilAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Death,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Reload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_Is_Walk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_IsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_CurrentPawnSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDevilAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDevilAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDevilAnimInstance_Statics::ClassParams = {
		&UDevilAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDevilAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDevilAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDevilAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDevilAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDevilAnimInstance, 255828178);
	template<> SOUL_API UClass* StaticClass<UDevilAnimInstance>()
	{
		return UDevilAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDevilAnimInstance(Z_Construct_UClass_UDevilAnimInstance, &UDevilAnimInstance::StaticClass, TEXT("/Script/Soul"), TEXT("UDevilAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDevilAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
