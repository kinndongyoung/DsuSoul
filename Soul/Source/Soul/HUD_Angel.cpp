#include "HUD_Angel.h"
#include "Blueprint/UserWidget.h"
//#include "Components/ProgressBar.h"

AHUD_Angel::AHUD_Angel()
{
	Angel_Install_State = false;
	
	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_INSTALL(TEXT("/Game/Project_Soul/BluePrint/Angel_InstallBar.Angel_InstallBar_C"));
	if (UI_HUD_INSTALL.Succeeded())
	{
		WidgetClass_InstallBar = UI_HUD_INSTALL.Class;
	}
}

void AHUD_Angel::BeginPlay()
{
	CurrentWidget_InstallBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_InstallBar);

	if (CurrentWidget_InstallBar)
		CurrentWidget_InstallBar->AddToViewport();

	//if (WidgetClass_InstallBar != nullptr && Angel_Install_State == true)
	//{
	//	CurrentWidget_InstallBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_InstallBar);
	//
	//	if (CurrentWidget_InstallBar)
	//		CurrentWidget_InstallBar->AddToViewport();
	//}
}