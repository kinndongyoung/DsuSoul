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
}

void AHUD_Human::BeginPlay()
{
	Super::BeginPlay();
	CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass_Bar);
	if (CurrentWidget != nullptr)
		CurrentWidget->AddToViewport();
}
