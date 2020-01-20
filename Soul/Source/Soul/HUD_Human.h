#pragma once

#include "Soul.h"
#include "GameFramework/HUD.h"
#include "HUD_Human.generated.h"

UCLASS()
class SOUL_API AHUD_Human : public AHUD
{
	GENERATED_BODY()

public:
	AHUD_Human();

protected:
	virtual void BeginPlay() override;

public:
	void HUD_CollectBar();

public:
	bool Human_Collect_State;
	bool Death_bar;
	int CollectCount;

	// ü�� �� sp ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character HP SP", Meta = (BluePrintProtected = "true"))
	TSubclassOf<class UUserWidget> WidgetClass_Bar;

	UPROPERTY(EditAnywhere, Category = Human_UI)
	class UUserWidget* CurrentWidget;

	// ��ġ ��
	UPROPERTY(EditAnywhere, Category = Angel_UI)
	TSubclassOf<class UUserWidget> WidgetClass_CollectBar;

	UPROPERTY(EditAnywhere, Category = Angel_UI)
	class UUserWidget* CurrentWidget_CollectBar;
};
