#pragma once

#include "Soul.h"
#include "HUD_Parent.h"
#include "HUD_Angel.generated.h"

UCLASS()
class SOUL_API AHUD_Angel : public AHUD_Parent
{
	GENERATED_BODY()
	
public:
	AHUD_Angel();

public:
	bool Angel_Install_State;

	// ��ġ ��
	UPROPERTY(EditAnywhere, Category = Angel_UI)
	TSubclassOf<class UUserWidget> WidgetClass_InstallBar;

	UPROPERTY(EditAnywhere, Category = Angel_UI)
	class UUserWidget* CurrentWidget_InstallBar;

protected:
	// ��� �Լ�
	void BeginPlay();

public:
	void HUD_HPSP();
	void HUD_Respawn();

public:
	// �� ��� �Լ�
	void HUD_Update(float InstallPercent);
};
