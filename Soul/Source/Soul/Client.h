// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Networking.h"	
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "CCirQueue.h"
#include "AnyCustomData.h"
#include "HumanCharacter.h"
#include "AngelCharacter.h"
#include "DevilCharacter.h"
#include "GameFramework/Actor.h"
#include "Client.generated.h"

UCLASS()
class SOUL_API AClient : public AActor
{
	GENERATED_UCLASS_BODY()
		bool IsUDP;

public:
	// Sets default values for this actor's properties
	AHumanCharacter* pawns[3];
	AHumanCharacter* myPawn;
	AAngelCharacter* engelpawn[3];
	AAngelCharacter* myEngel;
	ADevilCharacter* devilpawn[3];
	ADevilCharacter* myDevil;
	bool b_GameStart;
	CCirQueue g_Queue;
public:
	// Sets default values for this actor's properties
	TSharedPtr<FInternetAddr>	RemoteAddr;
	FSocket* SenderSocket;
	FSocket* ListenerSocket;
	UINT16 PlayerNumber;
	void Recv(const F_tgPacketHeader& ArrayReaderPtr, const FIPv4Endpoint& EndPt);
	UFUNCTION(BlueprintCallable)
		bool StartUDPSender(const FString& YourChosenSocketName, const FString& TheIP, const int32 ThePort);
	UFUNCTION(BlueprintCallable)
		bool Server_SendString(FString ToSend);
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rama UDP Sender")
		bool ShowOnScreenDebugMessages;
	//ScreenMsg
	FORCEINLINE void ScreenMsg(const FString& Msg)
	{
		if (!ShowOnScreenDebugMessages) return;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, *Msg);
	}
	FORCEINLINE void ScreenMsg(const FString& Msg, const float Value)
	{
		if (!ShowOnScreenDebugMessages) return;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s %f"), *Msg, Value));
	}
	FORCEINLINE void ScreenMsg(const FString& Msg, const FString& Msg2)
	{
		if (!ShowOnScreenDebugMessages) return;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%s %s"), *Msg, *Msg2));
	}

public:
	void SendHumanWin();
	void SendPlayerData();
	void SendPlayerHit();//총에 맞았다고 보내는 패킷
	UFUNCTION(BlueprintCallable)
		void AccessServer();
	void InitCharacter();
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;
};
