#pragma once
#include "Soul.h"
#include "Engine/TriggerSphere.h"
#include "Devil_ContractDoc.generated.h"

UCLASS()
class SOUL_API ADevil_ContractDoc : public ATriggerSphere
{
	GENERATED_BODY()

public:	
	ADevil_ContractDoc();

private:
	virtual void BeginPlay() override;

public:
	bool ContractDocState;

	UPROPERTY(VisibleAnywhere, Category = StaticMesh)
	UStaticMeshComponent *p_ContractDocMesh;
	
	UPROPERTY(VisibleAnywhere, Category = HUD)
	class AHUD_Devil* HUD_Devil;
	
	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
};
