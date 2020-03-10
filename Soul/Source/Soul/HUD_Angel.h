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

	// 설치 바
	UPROPERTY(EditAnywhere, Category = Angel_UI)
	TSubclassOf<class UUserWidget> WidgetClass_InstallBar;

	UPROPERTY(EditAnywhere, Category = Angel_UI)
	class UUserWidget* CurrentWidget_InstallBar;

protected:
	// 상속 함수
	virtual void BeginPlay() override;

public:
	virtual void HUD_HPSP() override;
	virtual void HUD_Respawn() override;

public:
	// 비 상속 함수
	void HUD_Update(float InstallPercent);
};
