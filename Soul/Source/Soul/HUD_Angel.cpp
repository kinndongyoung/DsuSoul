#include "HUD_Angel.h"
#include "Blueprint/UserWidget.h"

AHUD_Angel::AHUD_Angel()
{
	PrimaryActorTick.bCanEverTick = true;
	Angel_Install_State = false;
	
	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_INSTALL(TEXT("/Game/Project_Soul/UI/BP_AngelInstalBar.BP_AngelInstalBar_C"));
	if (UI_HUD_INSTALL.Succeeded())
	{
		WidgetClass_InstallBar = UI_HUD_INSTALL.Class;
	}
}

void AHUD_Angel::BeginPlay()
{
	CurrentWidget_InstallBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_InstallBar);
}

void AHUD_Angel::HUD_Update(float InstallPercent)
{	
	if (WidgetClass_InstallBar != nullptr && Angel_Install_State == true)
		CurrentWidget_InstallBar->AddToViewport();
	else if (WidgetClass_InstallBar != nullptr && Angel_Install_State == false)
		CurrentWidget_InstallBar->RemoveFromViewport();
}