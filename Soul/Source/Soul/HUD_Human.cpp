#include "HUD_Human.h"
#include "HumanCharacter.h"
#include "Blueprint/UserWidget.h"

AHUD_Human::AHUD_Human()
{
	PrimaryActorTick.bCanEverTick = true;
	Human_Collect_State = false;
	Death_bar = false;
	CollectCount = 0;

	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_COLLECT(TEXT("/Game/Project_Soul/UI/BP_HumanCollectBar.BP_HumanCollectBar_C"));
	if (UI_HUD_COLLECT.Succeeded())
		WidgetClass_CollectBar = UI_HUD_COLLECT.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_INSTALL(TEXT("/Game/Project_Soul/UI/Character_Hp_SP.Character_Hp_SP_C"));
	if (UI_HUD_INSTALL.Succeeded())
		WidgetClass_Bar = UI_HUD_INSTALL.Class;
}

void AHUD_Human::BeginPlay()
{
	Super::BeginPlay();

	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Bar);
	CurrentWidget_CollectBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_CollectBar);

	CurrentWidget->AddToViewport();
}

void AHUD_Human::HUD_CollectBar()
{
	if (WidgetClass_CollectBar != nullptr && Human_Collect_State == true)
		CurrentWidget_CollectBar->AddToViewport();
	else if (WidgetClass_CollectBar != nullptr && Human_Collect_State == false)
		CurrentWidget_CollectBar->RemoveFromViewport();
}
