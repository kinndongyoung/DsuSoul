// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/Client.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClient() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_AClient_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_AClient();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UFunction* Z_Construct_UFunction_AClient_AccessServer();
	SOUL_API UFunction* Z_Construct_UFunction_AClient_Server_SendString();
	SOUL_API UFunction* Z_Construct_UFunction_AClient_StartUDPSender();
// End Cross Module References
	void AClient::StaticRegisterNativesAClient()
	{
		UClass* Class = AClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AccessServer", &AClient::execAccessServer },
			{ "Server_SendString", &AClient::execServer_SendString },
			{ "StartUDPSender", &AClient::execStartUDPSender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AClient_AccessServer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClient_AccessServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AClient_AccessServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClient, nullptr, "AccessServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClient_AccessServer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AClient_AccessServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClient_AccessServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AClient_AccessServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AClient_Server_SendString_Statics
	{
		struct Client_eventServer_SendString_Parms
		{
			FString ToSend;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ToSend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AClient_Server_SendString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Client_eventServer_SendString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AClient_Server_SendString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Client_eventServer_SendString_Parms), &Z_Construct_UFunction_AClient_Server_SendString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AClient_Server_SendString_Statics::NewProp_ToSend = { "ToSend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Client_eventServer_SendString_Parms, ToSend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClient_Server_SendString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClient_Server_SendString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClient_Server_SendString_Statics::NewProp_ToSend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClient_Server_SendString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AClient_Server_SendString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClient, nullptr, "Server_SendString", nullptr, nullptr, sizeof(Client_eventServer_SendString_Parms), Z_Construct_UFunction_AClient_Server_SendString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AClient_Server_SendString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClient_Server_SendString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AClient_Server_SendString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClient_Server_SendString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AClient_Server_SendString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AClient_StartUDPSender_Statics
	{
		struct Client_eventStartUDPSender_Parms
		{
			FString YourChosenSocketName;
			FString TheIP;
			int32 ThePort;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThePort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThePort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TheIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YourChosenSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_YourChosenSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Client_eventStartUDPSender_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Client_eventStartUDPSender_Parms), &Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ThePort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ThePort = { "ThePort", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Client_eventStartUDPSender_Parms, ThePort), METADATA_PARAMS(Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ThePort_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ThePort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_TheIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_TheIP = { "TheIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Client_eventStartUDPSender_Parms, TheIP), METADATA_PARAMS(Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_TheIP_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_TheIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_YourChosenSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_YourChosenSocketName = { "YourChosenSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Client_eventStartUDPSender_Parms, YourChosenSocketName), METADATA_PARAMS(Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_YourChosenSocketName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_YourChosenSocketName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AClient_StartUDPSender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_ThePort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_TheIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AClient_StartUDPSender_Statics::NewProp_YourChosenSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AClient_StartUDPSender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Client.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AClient_StartUDPSender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AClient, nullptr, "StartUDPSender", nullptr, nullptr, sizeof(Client_eventStartUDPSender_Parms), Z_Construct_UFunction_AClient_StartUDPSender_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AClient_StartUDPSender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AClient_StartUDPSender_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AClient_StartUDPSender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AClient_StartUDPSender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AClient_StartUDPSender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AClient_NoRegister()
	{
		return AClient::StaticClass();
	}
	struct Z_Construct_UClass_AClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOnScreenDebugMessages_MetaData[];
#endif
		static void NewProp_ShowOnScreenDebugMessages_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowOnScreenDebugMessages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AClient_AccessServer, "AccessServer" }, // 4106349950
		{ &Z_Construct_UFunction_AClient_Server_SendString, "Server_SendString" }, // 2610113987
		{ &Z_Construct_UFunction_AClient_StartUDPSender, "StartUDPSender" }, // 2821901536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Client.h" },
		{ "ModuleRelativePath", "Client.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClient_Statics::NewProp_ShowOnScreenDebugMessages_MetaData[] = {
		{ "Category", "Rama UDP Sender" },
		{ "ModuleRelativePath", "Client.h" },
	};
#endif
	void Z_Construct_UClass_AClient_Statics::NewProp_ShowOnScreenDebugMessages_SetBit(void* Obj)
	{
		((AClient*)Obj)->ShowOnScreenDebugMessages = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AClient_Statics::NewProp_ShowOnScreenDebugMessages = { "ShowOnScreenDebugMessages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AClient), &Z_Construct_UClass_AClient_Statics::NewProp_ShowOnScreenDebugMessages_SetBit, METADATA_PARAMS(Z_Construct_UClass_AClient_Statics::NewProp_ShowOnScreenDebugMessages_MetaData, ARRAY_COUNT(Z_Construct_UClass_AClient_Statics::NewProp_ShowOnScreenDebugMessages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClient_Statics::NewProp_ShowOnScreenDebugMessages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClient_Statics::ClassParams = {
		&AClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AClient_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AClient_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClient, 3312756813);
	template<> SOUL_API UClass* StaticClass<AClient>()
	{
		return AClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClient(Z_Construct_UClass_AClient, &AClient::StaticClass, TEXT("/Script/Soul"), TEXT("AClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
