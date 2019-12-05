// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/Angel_InstallTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAngel_InstallTrigger() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AAngel_InstallTrigger_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AAngel_InstallTrigger();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UFunction* Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SOUL_API UFunction* Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AAngel_InstallTrigger::StaticRegisterNativesAAngel_InstallTrigger()
	{
		UClass* Class = AAngel_InstallTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AAngel_InstallTrigger::execOnOverlapBegin },
			{ "OnOverlapEnd", &AAngel_InstallTrigger::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics
	{
		struct Angel_InstallTrigger_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Angel_InstallTrigger_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Angel_InstallTrigger_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Angel_InstallTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngel_InstallTrigger, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Angel_InstallTrigger_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics
	{
		struct Angel_InstallTrigger_eventOnOverlapEnd_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Angel_InstallTrigger_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Angel_InstallTrigger_eventOnOverlapEnd_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Angel_InstallTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAngel_InstallTrigger, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(Angel_InstallTrigger_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAngel_InstallTrigger_NoRegister()
	{
		return AAngel_InstallTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AAngel_InstallTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p_InstallMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_p_InstallMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAngel_InstallTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerSphere,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAngel_InstallTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapBegin, "OnOverlapBegin" }, // 311222766
		{ &Z_Construct_UFunction_AAngel_InstallTrigger_OnOverlapEnd, "OnOverlapEnd" }, // 2156500074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAngel_InstallTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Angel_InstallTrigger.h" },
		{ "ModuleRelativePath", "Angel_InstallTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAngel_InstallTrigger_Statics::NewProp_p_InstallMesh_MetaData[] = {
		{ "Category", "Install_Space" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Angel_InstallTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAngel_InstallTrigger_Statics::NewProp_p_InstallMesh = { "p_InstallMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAngel_InstallTrigger, p_InstallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAngel_InstallTrigger_Statics::NewProp_p_InstallMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAngel_InstallTrigger_Statics::NewProp_p_InstallMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAngel_InstallTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAngel_InstallTrigger_Statics::NewProp_p_InstallMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAngel_InstallTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAngel_InstallTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAngel_InstallTrigger_Statics::ClassParams = {
		&AAngel_InstallTrigger::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAngel_InstallTrigger_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAngel_InstallTrigger_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAngel_InstallTrigger_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAngel_InstallTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAngel_InstallTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAngel_InstallTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAngel_InstallTrigger, 3413775319);
	template<> SOUL_API UClass* StaticClass<AAngel_InstallTrigger>()
	{
		return AAngel_InstallTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAngel_InstallTrigger(Z_Construct_UClass_AAngel_InstallTrigger, &AAngel_InstallTrigger::StaticClass, TEXT("/Script/Soul"), TEXT("AAngel_InstallTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAngel_InstallTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
