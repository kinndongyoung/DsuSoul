#include "HUD_Human.h"
#include "Blueprint/UserWidget.h"

AHUD_Human::AHUD_Human()
{
	PrimaryActorTick.bCanEverTick = true;

	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_IMG(TEXT("/Game/Project_Soul/UI/Human_Img.Human_Img_C"));
	if (UI_HUD_IMG.Succeeded()) WidgetClass_Img = UI_HUD_IMG.Class;
	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_COLLECT(TEXT("/Game/Project_Soul/UI/BP_HumanCollectBar.BP_HumanCollectBar_C"));
	if (UI_HUD_COLLECT.Succeeded()) WidgetClass_CollectBar = UI_HUD_COLLECT.Class;

	Human_Collect_State = false;
	CollectCount = 0;
}

void AHUD_Human::BeginPlay()
{
	AHUD_Parent::BeginPlay();
	Super::BeginPlay();

	ImgWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Img);
	CurrentWidget_CollectBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_CollectBar);
}

// HP, SP, 남은 총알, 조준점
void AHUD_Human::HUD_HPSP()
{
	AHUD_Parent::HUD_HPSP();
}

//리스폰
void AHUD_Human::HUD_Respawn()
{
	AHUD_Parent::HUD_Respawn();
}

// 설치 UI
void AHUD_Human::HUD_CollectBar()
{	
	if (WidgetClass_CollectBar != nullptr && Human_Collect_State == true)
		CurrentWidget_CollectBar->AddToViewport();
	else if (WidgetClass_CollectBar != nullptr && Human_Collect_State == false)
		CurrentWidget_CollectBar->RemoveFromViewport();
}
