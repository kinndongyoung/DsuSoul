// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Soul.h"
#include "GameFramework/HUD.h"
#include "HUD_Human.generated.h"

/**
 * 
 */
UCLASS()
class SOUL_API AHUD_Human : public AHUD
{
	GENERATED_BODY()

public:
		AHUD_Human();

protected:
	virtual void BeginPlay() override;
public:

	void HUD_Death_Update();

public:

	bool Death_bar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character HP SP", Meta = (BluePrintProtected = "true"))
		TSubclassOf<class UUserWidget> WidgetClass_Bar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Death", Meta = (BluePrintProtected = "true"))
		TSubclassOf<class UUserWidget> WidgetClass_Death_Bar;

	UPROPERTY(EditAnywhere, Category = Human_UI)
		class UUserWidget* CurrentWidget;
};