#include "Devil_ContractDoc.h"
#include "HUD_Devil.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Public/EngineUtils.h"

ADevil_ContractDoc::ADevil_ContractDoc()
{
	OnActorBeginOverlap.AddDynamic(this, &ADevil_ContractDoc::OnOverlapBegin);

	// Setting ContractDoc Mesh	
	p_ContractDocMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CONTRACTDOC_MESH"));
	p_ContractDocMesh->SetupAttachment(GetCollisionComponent());

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_DEVIL_CONTRACTDOC(TEXT("/Game/Project_Soul/Mesh/ContractDocMesh"));
	if (SM_DEVIL_CONTRACTDOC.Succeeded())
		p_ContractDocMesh->SetStaticMesh(SM_DEVIL_CONTRACTDOC.Object);

	p_ContractDocMesh->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	p_ContractDocMesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));

	ContractDocState = true;

}

void ADevil_ContractDoc::BeginPlay()
{
	Super::BeginPlay();
	HUD_Devil = Cast<AHUD_Devil>(GetWorld()->GetFirstPlayerController()->GetHUD());
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}

void ADevil_ContractDoc::OnOverlapBegin(class AActor *OverlappedActor, class AActor *OtherActor)
{
	if (OtherActor->ActorHasTag(FName(TEXT("Devil_Character"))))
	{
		if (OtherActor && (OtherActor != this))
		{
			ContractDocState = false;
			HUD_Devil->CollectCount++;
			Destroy();
		}
	}
	else print("I can't Collect");
}
