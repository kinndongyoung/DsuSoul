#include "HUD_Parent.h"
#include "Blueprint/UserWidget.h"

AHUD_Parent::AHUD_Parent()
{
	// UI Create & Initialize
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_FPS(TEXT("/Game/Project_Soul/UI/FPS_HP_SP.FPS_HP_SP_C"));
	if (UI_HUD_FPS.Succeeded()) WidgetClass_Bar_FPS = UI_HUD_FPS.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_CROSSHAIR(TEXT("/Game/Project_Soul/UI/BP_CrossHair.BP_CrossHair_C"));
	if (UI_HUD_CROSSHAIR.Succeeded()) WidgetClass_CrossHair = UI_HUD_CROSSHAIR.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_RESPAWN(TEXT("/Game/Project_Soul/UI/Character_Death.Character_Death_C"));
	if (UI_HUD_RESPAWN.Succeeded()) WigetClass_Respawn = UI_HUD_RESPAWN.Class;

	PrimaryActorTick.bCanEverTick = true;
	HUD_State = false;
	Death_bar = false;
}

void AHUD_Parent::BeginPlay()
{
	Super::BeginPlay();

	CurrentWidget_FPS = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Bar_FPS);
	CrossHairWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_CrossHair);
	CurrentWidget_Respawn = CreateWidget<UUserWidget>(GetWorld(), WigetClass_Respawn);
}

// HP, SP, 남은 총알, 조준점
void AHUD_Parent::HUD_HPSP()
{	
	if (CrossHairWidget != nullptr && CurrentWidget_FPS != nullptr && CurrentWidget_Respawn != nullptr)
	{
		if (HUD_State == false)
		{
			ImgWidget->AddToViewport();
			CurrentWidget_FPS->AddToViewport();
			CrossHairWidget->AddToViewport();
		}
		else if (HUD_State == true)
		{
			ImgWidget->RemoveFromViewport();
			CurrentWidget_FPS->RemoveFromViewport();
			CrossHairWidget->RemoveFromViewport();
		}
	}
}

//리스폰
void AHUD_Parent::HUD_Respawn()
{
	if (WigetClass_Respawn != nullptr && Death_bar == true)
		CurrentWidget_Respawn->AddToViewport();
	else if (WigetClass_Respawn != nullptr && Death_bar == false)
		CurrentWidget_Respawn->RemoveFromViewport();
}