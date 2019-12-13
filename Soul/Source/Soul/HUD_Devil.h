#pragma once

#include "Soul.h"
#include "GameFramework/HUD.h"
#include "HUD_Devil.generated.h"

UCLASS()
class SOUL_API AHUD_Devil : public AHUD
{
	GENERATED_BODY()
	
public:
	int HumanSoul;
	int CollectCount;
	int ActivateCount;

public:
	AHUD_Devil();

public:
	void HUD_Update();
};
