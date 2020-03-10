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
	// ��� �Լ�
	virtual void BeginPlay() override;

public:
	virtual void HUD_HPSP() override;
	virtual void HUD_Respawn() override;

public:
	// �� ��� �Լ�
	void HUD_Update();
};

