#include "HUD_Parent.h"
#include "Blueprint/UserWidget.h"

AHUD_Parent::AHUD_Parent()
{
	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_CROSSHAIR(TEXT("/Game/Project_Soul/UI/BP_CrossHair.BP_CrossHair_C"));
	if (UI_HUD_CROSSHAIR.Succeeded()) WidgetClass_CrossHair = UI_HUD_CROSSHAIR.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_HPSP(TEXT("/Game/Project_Soul/UI/Character_Hp_SP.Character_Hp_SP_C"));
	if (UI_HUD_HPSP.Succeeded()) WidgetClass_Bar = UI_HUD_HPSP.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_RESPAWN(TEXT("/Game/Project_Soul/UI/Character_Death.Character_Death_C"));
	if (UI_HUD_RESPAWN.Succeeded()) WigetClass_Respawn = UI_HUD_RESPAWN.Class;

	PrimaryActorTick.bCanEverTick = true;
	CrossHair_State = false;
	Death_bar = false;
}

void AHUD_Parent::BeginPlay()
{
	Super::BeginPlay();

	CrossHairWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_CrossHair);
	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Bar);
	CurrentWidget_Respawn = CreateWidget<UUserWidget>(GetWorld(), WigetClass_Respawn);
}

// HP, SP, 남은 총알, 조준점
void AHUD_Parent::HUD_HPSP()
{	
	if (WidgetClass_CrossHair != nullptr && WidgetClass_Bar != nullptr && CrossHair_State == true)
	{
		ImgWidget->AddToViewport();
		CurrentWidget->AddToViewport();
		CrossHairWidget->AddToViewport();
	}
	else if (WidgetClass_CrossHair != nullptr && WidgetClass_Bar != nullptr && CrossHair_State == false)
	{
		ImgWidget->RemoveFromViewport();
		CurrentWidget->RemoveFromViewport();
		CrossHairWidget->RemoveFromViewport();
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