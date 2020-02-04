#include "HUD_Human.h"
#include "HumanCharacter.h"
#include "Blueprint/UserWidget.h"

AHUD_Human::AHUD_Human()
{
	PrimaryActorTick.bCanEverTick = true;
	CrossHair_State = false;
	Human_Collect_State = false;
	Death_bar = false;
	CollectCount = 0;
	
	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_CROSSHAIR(TEXT("/Game/Project_Soul/UI/BP_CrossHair.BP_CrossHair_C"));
	if (UI_HUD_CROSSHAIR.Succeeded())
		WidgetClass_CrossHair = UI_HUD_CROSSHAIR.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_COLLECT(TEXT("/Game/Project_Soul/UI/BP_HumanCollectBar.BP_HumanCollectBar_C"));
	if (UI_HUD_COLLECT.Succeeded())
		WidgetClass_CollectBar = UI_HUD_COLLECT.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_INSTALL(TEXT("/Game/Project_Soul/UI/Human_Hp_SP.Human_Hp_SP_C"));
	if (UI_HUD_INSTALL.Succeeded())
		WidgetClass_Bar = UI_HUD_INSTALL.Class;
}

void AHUD_Human::BeginPlay()
{
	Super::BeginPlay();

	CrossHairWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_CrossHair);
	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Bar);
	CurrentWidget_CollectBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_CollectBar);
}

void AHUD_Human::HUD_CollectBar()
{
	// HP, SP, ������ UI ���Ǻ�
	if (WidgetClass_CrossHair != nullptr && WidgetClass_Bar != nullptr && CrossHair_State == true)
	{
		CurrentWidget->AddToViewport();
		CrossHairWidget->AddToViewport();
	}
		
	if (WidgetClass_CrossHair != nullptr && WidgetClass_Bar != nullptr && CrossHair_State == false)
	{
		CurrentWidget->RemoveFromViewport();
		CrossHairWidget->RemoveFromViewport();
	}		

	// ��ġ UI ���Ǻ�
	if (WidgetClass_CollectBar != nullptr && Human_Collect_State == true)
		CurrentWidget_CollectBar->AddToViewport();
	else if (WidgetClass_CollectBar != nullptr && Human_Collect_State == false)
		CurrentWidget_CollectBar->RemoveFromViewport();
}
