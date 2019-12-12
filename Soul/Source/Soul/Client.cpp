// Fill out your copyright notice in the Description page of Project Settings.


#include "Client.h"
#include "HumanAnimInstance.h"
#include "Engine/Engine.h"

// Sets default values
AClient::AClient(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SenderSocket = NULL;
	PlayerNumber = 0;
	b_GameStart = false;
	ShowOnScreenDebugMessages = true;
	for (int i = 0; i < 9; i++)
	{
		pawns[i] = NULL;
	}
	GetActorLocation();
}
// Called when the game starts or when spawned
void AClient::BeginPlay()
{
	Super::BeginPlay();
}
void AClient::InitCharacter()
{
	FActorSpawnParameters spawnParams;
	FVector tempVector = FVector::FVector(0, 0, 0);
	for (int i = 0; i < 9; i++)
	{
		if (i + 1 == PlayerNumber)
		{
			pawns[i] = GetWorld()->SpawnActor<AHumanCharacter>(AHumanCharacter::StaticClass(), FVector::FVector(-1640, 601 + (i * 200), 250), FRotator::ZeroRotator, spawnParams);
			myPawn = pawns[i];
			ScreenMsg("playernumber");
			ScreenMsg("playernumber -> ", (int32)PlayerNumber);
			GetWorld()->GetFirstPlayerController()->Possess((APawn*)myPawn);
			myPawn->HumanAnim->myPlayer = true;
		}

		else
			pawns[i] = GetWorld()->SpawnActor<AHumanCharacter>(AHumanCharacter::StaticClass(), FVector::FVector(-1640, 601 + (i * 200), 250), FRotator::ZeroRotator, spawnParams);
	}
	b_GameStart = true;
}
void AClient::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	//~~~~~~~~~~~~~~~~
	if (SenderSocket)
	{
		SenderSocket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(SenderSocket);
	}
}
// Called every frame


bool AClient::StartUDPSender(
	const FString& YourChosenSocketName,
	const FString& TheIP,
	const int32 ThePort)
{
	SenderSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TheIP, false);
	RemoteAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();

	bool bIsValid;
	RemoteAddr->SetIp(*TheIP, bIsValid);
	RemoteAddr->SetPort(ThePort);

	if (!bIsValid)
	{
		ScreenMsg("Rama UDP Sender>> IP address was not valid!", TheIP);
		return false;
	}

	bool connected;
	/*if (connect(*SenderSocket, (struct sockaddr*)&RemoteAddr, sizeof(RemoteAddr)) == SOCKET_ERROR)
	{
		return false;
	}*/
	//Set Send Buffer Size
	int32 SendSize = 2 * 1024 * 1024;
	SenderSocket->SetSendBufferSize(SendSize, SendSize);
	SenderSocket->SetReceiveBufferSize(SendSize, SendSize);


	UE_LOG(LogTemp, Log, TEXT("\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"));
	UE_LOG(LogTemp, Log, TEXT("Rama ****UDP**** Sender Initialized Successfully!!!"));
	UE_LOG(LogTemp, Log, TEXT("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n"));
	connected = SenderSocket->Connect(*RemoteAddr);
	if (connected)
	{
		ScreenMsg("connected");
	}
	ScreenMsg("not connected");
	return true;
}
void AClient::AccessServer()
{
	if (PlayerNumber == 0)
	{
		int32 BytesSent = 0;
		F_tgPacketHeader NewData;
		NewData.PktID = PKT_REQ_LOGIN;
		NewData.PktSize = sizeof(NewData);
		SenderSocket->SendTo((uint8*)&NewData, sizeof(NewData), BytesSent, *RemoteAddr);
		ScreenMsg("access_server");
	}
	else
		ScreenMsg("already_Access_Server");
}
void AClient::SendPlayerData()
{
	int32 BytesSent = 0;
	FPlayerData temp;
	temp.PktID = PKT_REQ_PLAYER_DATA;
	temp.user = PlayerNumber;
	temp.x = myPawn->GetActorLocation().X;
	temp.y = myPawn->GetActorLocation().Y;
	temp.z = myPawn->GetActorLocation().Z;
	temp.x2 = myPawn->GetActorRotation().Roll;
	temp.y2 = myPawn->GetActorRotation().Pitch;
	temp.z2 = myPawn->GetActorRotation().Yaw;
	temp.Is_Fire = myPawn->HumanAnim->IsFire;
	temp.Is_Walking = myPawn->HumanAnim->Is_Walk;
	temp.Is_Air = myPawn->HumanAnim->IsInAir;
	temp.CurrentPawnSpeed = myPawn->HumanAnim->CurrentPawnSpeed;
	temp.PktSize = sizeof(temp);

	SenderSocket->SendTo((uint8*)&temp, sizeof(temp), BytesSent, *RemoteAddr);
}
void AClient::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	uint8 buf[1024];
	int32 BytesRead = sizeof(buf);
	F_tgPacketHeader* temp = NULL;
	FPlayerData* temp2 = NULL;
	uint32 Size;
	if (b_GameStart)
	{
		SendPlayerData();
	}
	while (SenderSocket->HasPendingData(Size))
	{
		int32 Read = 0;
		if (SenderSocket->Recv((uint8*)&buf, BytesRead, Read))
		{
			//ScreenMsg("recvSize : ", Read);
			temp = (F_tgPacketHeader*)&buf;
			temp2 = (FPlayerData*)&buf;
		}

		else
		{
			ScreenMsg("data received fail");
			break;
		}
		g_Queue.OnPutData((char*)buf, Read);
		F_tgPacketHeader* pHeader = g_Queue.GetPacket();
		while (pHeader != NULL)
		{
			if (pHeader->PktID == PKT_REQ_LOGINFULL)//9명 모두 채워졌을 시 들어오는 패킷
				ScreenMsg("full_server");
			else if (pHeader->PktID == PKT_REQ_ACCESS_LOGIN)//로그인이 되었을 시 들어오는 패킷
			{
				if (PlayerNumber == 0)
				{
					PlayerNumber = pHeader->user;
					InitCharacter();
				}
				else
					ScreenMsg("already_access");
			}
			else if (pHeader->PktID == PKT_REQ_PLAYER_DATA && b_GameStart)
			{
				FPlayerData* pPlayerData = (FPlayerData*)pHeader;
				if (PlayerNumber != pPlayerData->user)
				{
					if (PlayerNumber >= 1 && PlayerNumber <= 9)
					{
						//ScreenMsg("error");
						FVector f_temp;
						f_temp.Set(pPlayerData->x, pPlayerData->y, pPlayerData->z);
						pawns[(pPlayerData->user) - 1]->SetActorLocation(f_temp);
						pawns[(pPlayerData->user) - 1]->SetActorRotation(FRotator::FRotator(pPlayerData->y2, pPlayerData->z2, pPlayerData->x2));
						pawns[(pPlayerData->user) - 1]->HumanAnim->CurrentPawnSpeed = pPlayerData->CurrentPawnSpeed;
						ScreenMsg("currentspeed : ", pawns[(pPlayerData->user) - 1]->HumanAnim->CurrentPawnSpeed);

						if (pPlayerData->Is_Walking&&pawns[(pPlayerData->user) - 1]->HumanAnim->Is_Walk==false)
							pawns[(pPlayerData->user) - 1]->HumanAnim->Is_Walk = true;
						else if (pPlayerData->Is_Walking == false)
							pawns[(pPlayerData->user) - 1]->HumanAnim->Is_Walk = false;
						if (pPlayerData->Is_Air)
							pawns[(pPlayerData->user) - 1]->HumanAnim->IsInAir = true;
						else if (!pPlayerData->Is_Air)
							pawns[(pPlayerData->user) - 1]->HumanAnim->IsInAir = false;
						if (pPlayerData->Is_LayDown)
							pawns[(pPlayerData->user) - 1]->HumanAnim->Is_LayDown = true;
						else if (!pPlayerData->Is_LayDown)
							pawns[(pPlayerData->user) - 1]->HumanAnim->Is_LayDown = false;
						if (pPlayerData->Is_SitDown)
							pawns[(pPlayerData->user) - 1]->HumanAnim->Is_SitDown = true;
						else if (!pPlayerData->Is_SitDown)
							pawns[(pPlayerData->user) - 1]->HumanAnim->Is_SitDown = false;
						if (pPlayerData->Is_Reload)
							pawns[(pPlayerData->user) - 1]->HumanAnim->Is_Reload = true;
						else if (!pPlayerData->Is_Reload)
							pawns[(pPlayerData->user) - 1]->HumanAnim->Is_Reload = false;
						if(pPlayerData->Is_Fire)
							pawns[(pPlayerData->user) - 1]->StartFire();
						else if(pPlayerData->Is_Fire==false&&pawns[(pPlayerData->user) - 1]->isFiring)
							pawns[(pPlayerData->user) - 1]->StopFire();
						
						
						//pawns[(pPlayerData->user) - 1]->HumanAnim->Is_Walk = true;
					}
				}

			}
			g_Queue.OnPopData(pHeader->PktSize);
			pHeader = g_Queue.GetPacket();
		}
	}
}
bool AClient::Server_SendString(FString ToSend)
{
	if (!SenderSocket)
	{
		ScreenMsg("No sender socket");
		return false;
	}
	//~~~~~~~~~~~~~~~~

	int32 BytesSent = 0;

	F_tgPacketHeader NewData;
	NewData.PktID = 15;
	NewData.PktSize = sizeof(NewData);

	//Writer << NewData; //Serializing our custom data, thank you UE4!

	SenderSocket->SendTo((uint8*)&NewData, sizeof(NewData), BytesSent, *RemoteAddr);
	if (BytesSent <= 0)
	{
		const FString Str = "Socket is valid but the receiver received 0 bytes, make sure it is listening properly!";
		UE_LOG(LogTemp, Error, TEXT("%s"), *Str);
		ScreenMsg(Str);
		return false;
	}
	ScreenMsg("UDP~ Send Succcess! Bytes Sent = ", BytesSent);

	return true;
}

void AClient::Recv(const F_tgPacketHeader& ArrayReaderPtr, const FIPv4Endpoint& EndPt)
{
	//ScreenMsg("Received bytes", sizeof(ArrayReaderPtr));

	//FAnyCustomData Data;
	//*ArrayReaderPtr << Data;		//Now de-serializing! See AnyCustomData.h

	////BP Event
	//BPEvent_DataReceived(Data);
}

