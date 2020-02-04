#pragma once

#include "Soul.h"
#include "GameFramework/HUD.h"
#include "HUD_Angel.generated.h"

UCLASS()
class SOUL_API AHUD_Angel : public AHUD
{
	GENERATED_BODY()
	
public:
	int HumanSoul;
	int CollectCount;
	int ActivateCount;

public:
	AHUD_Angel();

public:
	void HUD_Update();
//
//public:
//	bool Angel_Install_State;
//	UPROPERTY(EditAnymhere, Category)
};

