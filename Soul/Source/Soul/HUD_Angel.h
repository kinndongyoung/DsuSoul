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
	virtual void BeginPlay() override;

public:
	virtual void HUD_HPSP() override;
	virtual void HUD_Respawn() override;

public:
	// �� ��� �Լ�
	void HUD_Update(float InstallPercent);
};
