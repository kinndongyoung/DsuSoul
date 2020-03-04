#include "HUD_Angel.h"
#include "Blueprint/UserWidget.h"

AHUD_Angel::AHUD_Angel()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// UI Create & Initialize	
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_IMG(TEXT("/Game/Project_Soul/UI/Angel_Img.Angel_Img_C"));
	if (UI_HUD_IMG.Succeeded()) WidgetClass_Img = UI_HUD_IMG.Class;

	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_INSTALL(TEXT("/Game/Project_Soul/UI/BP_AngelInstalBar.BP_AngelInstalBar_C"));
	if (UI_HUD_INSTALL.Succeeded()) WidgetClass_InstallBar = UI_HUD_INSTALL.Class;
	
	Angel_Install_State = false;
}

void AHUD_Angel::BeginPlay()
{
	AHUD_Parent::BeginPlay();
	Super::BeginPlay();

	ImgWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Img);
	CurrentWidget_InstallBar = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_InstallBar);
}

// HP, SP, 남은 총알, 조준점
void AHUD_Angel::HUD_HPSP()
{
	AHUD_Parent::HUD_HPSP();
}

//리스폰
void AHUD_Angel::HUD_Respawn()
{
	AHUD_Parent::HUD_Respawn();
}

// 점령 UI
void AHUD_Angel::HUD_Update(float InstallPercent)
{
	if (WidgetClass_InstallBar != nullptr && Angel_Install_State == true)
		CurrentWidget_InstallBar->AddToViewport();
	else if (WidgetClass_InstallBar != nullptr && Angel_Install_State == false)
		CurrentWidget_InstallBar->RemoveFromViewport();
}
