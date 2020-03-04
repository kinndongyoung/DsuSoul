#pragma once

#include "Soul.h"
#include "HUD_Parent.h"
#include "HUD_Devil.generated.h"

UCLASS()
class SOUL_API AHUD_Devil : public AHUD_Parent
{
	GENERATED_BODY()
	
public:
	AHUD_Devil();

public:
	int HumanSoul;
	int CollectCount;
	int ActivateCount;

protected:
	// 상속 함수
	void BeginPlay();

public:
	void HUD_HPSP();
	void HUD_Respawn();

public:
	// 비 상속 함수
	void HUD_Update();
};

