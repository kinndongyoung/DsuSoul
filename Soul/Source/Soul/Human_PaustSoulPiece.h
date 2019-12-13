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

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

public:
	bool PieceState;
	float PieceProcess;

	UPROPERTY(VisibleAnywhere, Category = Install_Space)
	UStaticMeshComponent *p_SoulPieceMesh;
};
