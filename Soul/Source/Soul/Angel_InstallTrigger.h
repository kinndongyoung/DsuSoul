#pragma once

#include "Soul.h"
#include "Engine/TriggerSphere.h"
#include "Angel_InstallTrigger.generated.h"

UCLASS()
class SOUL_API AAngel_InstallTrigger : public ATriggerSphere
{
	GENERATED_BODY()

public:
	AAngel_InstallTrigger();

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

public:
	bool InstallState;
	float InstallProcess;	

	UPROPERTY(VisibleAnywhere, Category = Install_Space)
	UStaticMeshComponent *p_InstallMesh;	
};
