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

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_RESPAWN(TEXT("/Game/Project_Soul/UI/Character_Death.Character_Death_C"));
	if(UI_HUD_RESPAWN.Succeeded())
		WigetClass_Respawn = UI_HUD_RESPAWN.Class;
}

void AHUD_Human::BeginPlay()
{
	Super::BeginPlay();

	CrossHairWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_CrossHair);
	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Bar);
	CurrentWidget_CollectBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_CollectBar);
	CurrentWidget_Respawn = CreateWidget<UUserWidget>(GetWorld(), WigetClass_Respawn);
}

void AHUD_Human::HUD_CollectBar()
{
	// ��ġ UI ���Ǻ�
	if (WidgetClass_CollectBar != nullptr && Human_Collect_State == true)
		CurrentWidget_CollectBar->AddToViewport();
	else if (WidgetClass_CollectBar != nullptr && Human_Collect_State == false)
		CurrentWidget_CollectBar->RemoveFromViewport();
}

void AHUD_Human::HUD_HPSP()
{
	// HP, SP, ������ UI ���Ǻ�
	if (WidgetClass_CrossHair != nullptr && WidgetClass_Bar != nullptr && CrossHair_State == true)
	{
		CurrentWidget->AddToViewport();
		CrossHairWidget->AddToViewport();
	}
	else if (WidgetClass_CrossHair != nullptr && WidgetClass_Bar != nullptr && CrossHair_State == false)
	{
		CurrentWidget->RemoveFromViewport();
		CrossHairWidget->RemoveFromViewport();
	}
}

void AHUD_Human::HUD_Respawn()
{
	//������ ����
	if (WigetClass_Respawn != nullptr && Death_bar == true)
		CurrentWidget_Respawn->AddToViewport();
	else if (WigetClass_Respawn != nullptr && Death_bar == false)
		CurrentWidget_Respawn->RemoveFromViewport();
}