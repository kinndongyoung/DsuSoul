// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnyCustomData.generated.h"
#define PKT_REQ_LOGIN	0xa0000001 //서버에 로그인 요청 패킷
#define PKT_REQ_LOGINFULL	0xa0000002 //서버에 로그인 실패 패킷
#define PKT_REQ_ACCESS_LOGIN	0xa0000003 // 서버 로그인 성공 패킷
#define PKT_REQ_PLAYER_DATA	0xa0000004

USTRUCT(BlueprintType)
struct F_tgPacketHeader
{
	GENERATED_USTRUCT_BODY()
		UINT32 PktID;
	UINT16	PktSize;
	UINT16 userID;
	UINT16 user;

	F_tgPacketHeader() {};
	~F_tgPacketHeader() {};
};

USTRUCT(BlueprintType)
struct  FPlayerData : public F_tgPacketHeader
{
	GENERATED_USTRUCT_BODY()
	INT32 x;
	INT32 y;
	INT32 z;
	INT32 x2;
	INT32 y2;
	INT32 z2;
	bool Is_Walking;
	bool Is_Air;
	bool Is_Fire;
	bool Is_LayDown;
	bool Is_Reload;
	bool Is_SitDown;
	float CurrentPawnSpeed;
	FPlayerData() {};
	~FPlayerData() {};
};

FORCEINLINE FArchive& operator<<(FArchive &Ar, F_tgPacketHeader& TheStruct)
{
	/*Ar << TheStruct.PktID;
	Ar << TheStruct.PktSize;
	Ar << TheStruct.userID;
	Ar << TheStruct.userStrID;*/

	return Ar;
}

