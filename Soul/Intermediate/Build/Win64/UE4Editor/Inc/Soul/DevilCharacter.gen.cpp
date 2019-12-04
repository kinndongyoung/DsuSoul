// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/DevilCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevilCharacter() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_ADevilCharacter_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_ADevilCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Soul();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_UDevilAnimInstance_NoRegister();
// End Cross Module References
	void ADevilCharacter::StaticRegisterNativesADevilCharacter()
	{
	}
	UClass* Z_Construct_UClass_ADevilCharacter_NoRegister()
	{
		return ADevilCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADevilCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserCameraArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevilAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DevilAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevilCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DevilCharacter.h" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab?\xde\xb6?//\x09\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm = { "UserCameraArm", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, UserCameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim_MetaData[] = {
		{ "Category", "AnimInstance" },
		{ "Comment", "// ?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????\n" },
		{ "ModuleRelativePath", "DevilCharacter.h" },
		{ "ToolTip", "?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim = { "DevilAnim", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADevilCharacter, DevilAnim), Z_Construct_UClass_UDevilAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADevilCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_UserCameraArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADevilCharacter_Statics::NewProp_DevilAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADevilCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADevilCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADevilCharacter_Statics::ClassParams = {
		&ADevilCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADevilCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADevilCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADevilCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADevilCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADevilCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADevilCharacter, 427237551);
	template<> SOUL_API UClass* StaticClass<ADevilCharacter>()
	{
		return ADevilCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADevilCharacter(Z_Construct_UClass_ADevilCharacter, &ADevilCharacter::StaticClass, TEXT("/Script/Soul"), TEXT("ADevilCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADevilCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
