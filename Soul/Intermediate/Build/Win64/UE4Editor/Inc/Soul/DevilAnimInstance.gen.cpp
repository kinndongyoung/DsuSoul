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
	SOUL_API UClass* Z_Construct_UClass_UAnimInstance_Parent();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UFunction* Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UDevilAnimInstance::StaticRegisterNativesUDevilAnimInstance()
	{
		UClass* Class = UDevilAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_Attack", &UDevilAnimInstance::execAnimNotify_Attack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevilAnimInstance, nullptr, "AnimNotify_Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDevilAnimInstance_NoRegister()
	{
		return UDevilAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDevilAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevilAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DevilAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDevilAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance_Parent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDevilAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDevilAnimInstance_AnimNotify_Attack, "AnimNotify_Attack" }, // 294320952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DevilAnimInstance.h" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_DevilAttack_MetaData[] = {
		{ "AllowPrivateAcces", "TRUE" },
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DevilAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_DevilAttack = { "DevilAttack", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDevilAnimInstance, DevilAttack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_DevilAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_DevilAttack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDevilAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDevilAnimInstance_Statics::NewProp_DevilAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDevilAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDevilAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDevilAnimInstance_Statics::ClassParams = {
		&UDevilAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDevilAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UDevilAnimInstance, 2546943034);
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
