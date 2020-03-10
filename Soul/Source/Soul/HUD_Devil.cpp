#include "HUD_Devil.h"
#include "Devil_ContractDoc.h"
#include "Blueprint/UserWidget.h"

AHUD_Devil::AHUD_Devil()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_IMG(TEXT("/Game/Project_Soul/UI/FPS_Devil_Img.FPS_Devil_Img_C"));
	if (UI_HUD_IMG.Succeeded()) WidgetClass_Img = UI_HUD_IMG.Class;

	HumanSoul = 0;
	CollectCount = 0;
	ActivateCount = 0;
}
void AHUD_Devil::BeginPlay()
{
	AHUD_Parent::BeginPlay();
	Super::BeginPlay();

	ImgWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Img);
}

// HP, SP, 남은 총알, 조준점
void AHUD_Devil::HUD_HPSP()
{
	AHUD_Parent::HUD_HPSP();
}

//리스폰
void AHUD_Devil::HUD_Respawn()
{
	AHUD_Parent::HUD_Respawn();
}

// 인간 영혼 수집 UI
void AHUD_Devil::HUD_Update()
{
	if (CollectCount == 1)
	{
		if(ActivateCount == 0)
			printf("Contract 1 Soul : %d", HumanSoul);
		else if (ActivateCount == 1)
			print("Contract 1 Soul : Activate");
	}
	else if (CollectCount == 2)
	{
		if (ActivateCount == 0)
		{
			printf("Contract 1 Soul : %d", HumanSoul);
			print("Contract 2 Soul : 0");
		}
		else if (ActivateCount == 1)
		{
			print("Contract 1 Soul : Activate");
			printf("Contract 2 Soul : %d", HumanSoul);
		}
		else if (ActivateCount == 2)
		{
			print("Contract 1 Soul : Activate");
			print("Contract 2 Soul : Activate");
		}
	}

	if (HumanSoul == 3 && CollectCount <= 2 && ActivateCount <= 1)
	{
		ActivateCount++;
		HumanSoul = 0;
	}
}
