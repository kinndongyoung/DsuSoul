#pragma once

#include "Soul.h"
#include "GameFramework/HUD.h"
#include "HUD_Parent.generated.h"

UCLASS()
class SOUL_API AHUD_Parent : public AHUD
{
	GENERATED_BODY()

public:
	AHUD_Parent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void HUD_HPSP();
	virtual void HUD_Respawn();

public:
	bool HUD_State;
	bool CrossHair_State;
	bool Death_bar;

	// ������
	UPROPERTY(EditAnywhere, Category = CrossHair)
	TSubclassOf<class UUserWidget> WidgetClass_CrossHair;

	UPROPERTY(EditAnywhere, Category = CrossHair)
	class UUserWidget* CrossHairWidget;

	//������ ��
	UPROPERTY(EditAnywhere, Category = Respawn)
	TSubclassOf<class UUserWidget> WigetClass_Respawn;

	UPROPERTY(EditAnywhere, Category = Respawn)
	class UUserWidget* CurrentWidget_Respawn;
};
