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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanWeaponBullet_FireActor();
	SOUL_API UClass* Z_Construct_UClass_AHumanCharacter_NoRegister();
	SOUL_API UFunction* Z_Construct_UFunction_AHumanWeaponBullet_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AHumanWeaponBullet::StaticRegisterNativesAHumanWeaponBullet()
	{
		UClass* Class = AHumanWeaponBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireActor", &AHumanWeaponBullet::execFireActor },
			{ "OnHit", &AHumanWeaponBullet::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics
	{
		struct HumanWeaponBullet_eventFireActor_Parms
		{
			AHumanCharacter* pt_FireChar;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pt_FireChar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::NewProp_pt_FireChar = { "pt_FireChar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanWeaponBullet_eventFireActor_Parms, pt_FireChar), Z_Construct_UClass_AHumanCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::NewProp_pt_FireChar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HumanWeaponBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanWeaponBullet, nullptr, "FireActor", nullptr, nullptr, sizeof(HumanWeaponBullet_eventFireActor_Parms), Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanWeaponBullet_FireActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanWeaponBullet_FireActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics
	{
		struct HumanWeaponBullet_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanWeaponBullet_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanWeaponBullet_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanWeaponBullet_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_OtherComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanWeaponBullet_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HumanWeaponBullet_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_HitComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::NewProp_HitComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ?\xd1\xbe??? ???\xf0\xb0\xa1\xbf? ?????? \xc8\xa3???\xc7\xb4? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "HumanWeaponBullet.h" },
		{ "ToolTip", "?\xd1\xbe??? ???\xf0\xb0\xa1\xbf? ?????? \xc8\xa3???\xc7\xb4? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHumanWeaponBullet, nullptr, "OnHit", nullptr, nullptr, sizeof(HumanWeaponBullet_eventOnHit_Parms), Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHumanWeaponBullet_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHumanWeaponBullet_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHumanWeaponBullet_NoRegister()
	{
		return AHumanWeaponBullet::StaticClass();
	}
	struct Z_Construct_UClass_AHumanWeaponBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HumanChar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HumanChar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletMoveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletMoveComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHumanWeaponBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHumanWeaponBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHumanWeaponBullet_FireActor, "FireActor" }, // 3281587434
		{ &Z_Construct_UFunction_AHumanWeaponBullet_OnHit, "OnHit" }, // 2584691025
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanWeaponBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HumanWeaponBullet.h" },
		{ "ModuleRelativePath", "HumanWeaponBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar_MetaData[] = {
		{ "Category", "FireActor" },
		{ "ModuleRelativePath", "HumanWeaponBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar = { "HumanChar", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanWeaponBullet, HumanChar), Z_Construct_UClass_AHumanCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_BulletMoveComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// ??????\xc5\xb8?? ??????\xc6\xae ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HumanWeaponBullet.h" },
		{ "ToolTip", "??????\xc5\xb8?? ??????\xc6\xae ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_BulletMoveComponent = { "BulletMoveComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanWeaponBullet, BulletMoveComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_BulletMoveComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_BulletMoveComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Bullet" },
		{ "Comment", "// ??\xc3\xbc ?\xdd\xb8??? ??????\xc6\xae\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HumanWeaponBullet.h" },
		{ "ToolTip", "??\xc3\xbc ?\xdd\xb8??? ??????\xc6\xae" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHumanWeaponBullet, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_CollisionComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_CollisionComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHumanWeaponBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_HumanChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_BulletMoveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHumanWeaponBullet_Statics::NewProp_CollisionComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHumanWeaponBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHumanWeaponBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHumanWeaponBullet_Statics::ClassParams = {
		&AHumanWeaponBullet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHumanWeaponBullet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AHumanWeaponBullet, 682463432);
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
