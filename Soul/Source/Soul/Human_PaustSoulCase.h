#pragma once

#include "Soul.h"
#include "Engine/TriggerSphere.h"
#include "Human_PaustSoulCase.generated.h"

UCLASS()
class SOUL_API AHuman_PaustSoulCase : public ATriggerSphere
{
	GENERATED_BODY()

public:
	AHuman_PaustSoulCase();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

public:
	UPROPERTY(VisibleAnywhere, Category = Install_Space)
	UStaticMeshComponent *p_PaustCaseMesh;
};
