// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/AnyCustomData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnyCustomData() {}
// Cross Module References
	SOUL_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerData();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UScriptStruct* Z_Construct_UScriptStruct_F_tgPacketHeader();
// End Cross Module References
class UScriptStruct* FPlayerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOUL_API uint32 Get_Z_Construct_UScriptStruct_FPlayerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerData, Z_Construct_UPackage__Script_Soul(), TEXT("PlayerData"), sizeof(FPlayerData), Get_Z_Construct_UScriptStruct_FPlayerData_Hash());
	}
	return Singleton;
}
template<> SOUL_API UScriptStruct* StaticStruct<FPlayerData>()
{
	return FPlayerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerData(FPlayerData::StaticStruct, TEXT("/Script/Soul"), TEXT("PlayerData"), false, nullptr, nullptr);
static struct FScriptStruct_Soul_StaticRegisterNativesFPlayerData
{
	FScriptStruct_Soul_StaticRegisterNativesFPlayerData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerData")),new UScriptStruct::TCppStructOps<FPlayerData>);
	}
} ScriptStruct_Soul_StaticRegisterNativesFPlayerData;
	struct Z_Construct_UScriptStruct_FPlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AnyCustomData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
		Z_Construct_UScriptStruct_F_tgPacketHeader,
		&NewStructOps,
		"PlayerData",
		sizeof(FPlayerData),
		alignof(FPlayerData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Soul();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerData"), sizeof(FPlayerData), Get_Z_Construct_UScriptStruct_FPlayerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerData_Hash() { return 3860395279U; }
class UScriptStruct* F_tgPacketHeader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOUL_API uint32 Get_Z_Construct_UScriptStruct_F_tgPacketHeader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_F_tgPacketHeader, Z_Construct_UPackage__Script_Soul(), TEXT("_tgPacketHeader"), sizeof(F_tgPacketHeader), Get_Z_Construct_UScriptStruct_F_tgPacketHeader_Hash());
	}
	return Singleton;
}
template<> SOUL_API UScriptStruct* StaticStruct<F_tgPacketHeader>()
{
	return F_tgPacketHeader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_F_tgPacketHeader(F_tgPacketHeader::StaticStruct, TEXT("/Script/Soul"), TEXT("_tgPacketHeader"), false, nullptr, nullptr);
static struct FScriptStruct_Soul_StaticRegisterNativesF_tgPacketHeader
{
	FScriptStruct_Soul_StaticRegisterNativesF_tgPacketHeader()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("_tgPacketHeader")),new UScriptStruct::TCppStructOps<F_tgPacketHeader>);
	}
} ScriptStruct_Soul_StaticRegisterNativesF_tgPacketHeader;
	struct Z_Construct_UScriptStruct_F_tgPacketHeader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_F_tgPacketHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AnyCustomData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_F_tgPacketHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<F_tgPacketHeader>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_F_tgPacketHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
		nullptr,
		&NewStructOps,
		"_tgPacketHeader",
		sizeof(F_tgPacketHeader),
		alignof(F_tgPacketHeader),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_F_tgPacketHeader_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_F_tgPacketHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_F_tgPacketHeader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_F_tgPacketHeader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Soul();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("_tgPacketHeader"), sizeof(F_tgPacketHeader), Get_Z_Construct_UScriptStruct_F_tgPacketHeader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_F_tgPacketHeader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_F_tgPacketHeader_Hash() { return 3203316179U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
