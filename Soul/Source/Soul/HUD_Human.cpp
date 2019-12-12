// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD_Human.h"
#include "HumanCharacter.h"
#include "Blueprint/UserWidget.h"

AHUD_Human::AHUD_Human()
{
	Death_bar = false;
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_INSTALL(TEXT("/Game/Project_Soul/UI/Character_Hp_SP.Character_Hp_SP_C"));
	if (UI_HUD_INSTALL.Succeeded())
	{
		WidgetClass_Bar = UI_HUD_INSTALL.Class;
	}
	static ConstructorHelpers::FClassFinder<UUserWidget> UI_HUD_DEATH(TEXT("/Game/Project_Soul/UI/Character_Death.Character_Death_C"));
	if (UI_HUD_DEATH.Succeeded())
	{
		WidgetClass_Death_Bar = UI_HUD_DEATH.Class;
	}
}

void AHUD_Human::BeginPlay()
{
	Super::BeginPlay();
	//AHumanCharacter* Human;
	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Bar);
	CurrentWidget_Death = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Death_Bar);
	if (CurrentWidget != nullptr)
		CurrentWidget->AddToViewport();
}
