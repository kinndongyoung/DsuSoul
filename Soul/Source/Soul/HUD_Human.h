#pragma once

#include "Soul.h"
#include "HUD_Parent.h"
#include "HUD_Human.generated.h"

UCLASS()
class SOUL_API AHUD_Human : public AHUD_Parent
{
	GENERATED_BODY()

public:
	AHUD_Human();

public:
	bool Human_Collect_State;
	int CollectCount;

	// ��ġ ��
	UPROPERTY(EditAnywhere, Category = Angel_UI)
	TSubclassOf<class UUserWidget> WidgetClass_CollectBar;

	UPROPERTY(EditAnywhere, Category = Angel_UI)
	class UUserWidget* CurrentWidget_CollectBar;

protected:
	// ��� �Լ�
	void BeginPlay();

public:
	void HUD_HPSP();
	void HUD_Respawn();

public:
	// �� ��� �Լ�
	void HUD_CollectBar();
};
