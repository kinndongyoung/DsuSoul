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
	bool Death_bar;
protected:
	virtual void BeginPlay() override;

public:
	AHUD_Devil();

public:
	void HUD_Update();


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Devil HP SP", Meta = (BluePrintProtected = "true"))
		TSubclassOf<class UUserWidget> WidgetClass_Bar;

	UPROPERTY(EditAnywhere, Category = Human_UI)
		class UUserWidget* CurrentWidget;
};
