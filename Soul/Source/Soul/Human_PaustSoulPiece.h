#pragma once

#include "Soul.h"
#include "Engine/TriggerSphere.h"
#include "Human_PaustSoulPiece.generated.h"

UCLASS()
class SOUL_API AHuman_PaustSoulPiece : public ATriggerSphere
{
	GENERATED_BODY()
	
public:	
	AHuman_PaustSoulPiece();

private:
	virtual void BeginPlay() override;

public:
	bool PieceState;

	UPROPERTY(VisibleAnywhere, Category = Install_Space)
	UStaticMeshComponent *p_SoulPieceMesh;

	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Human* HUD_Human;

	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
};
