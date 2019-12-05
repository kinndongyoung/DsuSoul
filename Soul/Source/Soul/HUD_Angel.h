#pragma once

#include "Soul.h"
#include "GameFramework/HUD.h"
#include "HUD_Angel.generated.h"

UCLASS()
class SOUL_API AHUD_Angel : public AHUD
{
	GENERATED_BODY()
	
public:
	AHUD_Angel();

protected:
	virtual void BeginPlay() override;

public:
	bool Angel_Install_State;

	UPROPERTY(EditAnywhere, Category = Angel_UI)
	TSubclassOf<class UUserWidget> WidgetClass_InstallBar;

	UPROPERTY(EditAnywhere, Category = Angel_UI)
	class UUserWidget* CurrentWidget_InstallBar;
};
