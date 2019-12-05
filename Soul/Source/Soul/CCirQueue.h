// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "AnyCustomData.h"

#define QUEUE_SIZE 10000
/**
 * 
 */
class SOUL_API CCirQueue
{
protected:
	char *m_pQueue;
	int m_sFront;
	int m_sRear;
public:
	void ClearQueue() { InitQueue(); }
	void InitQueue();
	void InitZeroQueue();

	int OnPutData(char *pData, short recvsize);
	void OnPopData(short popsize);

	F_tgPacketHeader* GetPacket();
	CCirQueue();
	~CCirQueue();
};
