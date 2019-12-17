#include "Human_PaustSoulPiece.h"
#include "HUD_Human.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Public/EngineUtils.h"

AHuman_PaustSoulPiece::AHuman_PaustSoulPiece()
{
	OnActorBeginOverlap.AddDynamic(this, &AHuman_PaustSoulPiece::OnOverlapBegin);

	// Setting Install Mesh
	p_SoulPieceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SOULPIECE_MESH"));
	p_SoulPieceMesh->SetupAttachment(GetCollisionComponent());

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_ANGEL_INSTALL_SPACE(TEXT("/Game/Project_Soul/Mesh/CollectSpace"));
	if (SM_ANGEL_INSTALL_SPACE.Succeeded())
		p_SoulPieceMesh->SetStaticMesh(SM_ANGEL_INSTALL_SPACE.Object);

	p_SoulPieceMesh->SetWorldScale3D(FVector(0.2f, 0.2f, 0.2f));
	p_SoulPieceMesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));

	PieceState = true;
}

void AHuman_PaustSoulPiece::BeginPlay()
{
	Super::BeginPlay();
	HUD_Human = Cast<AHUD_Human>(GetWorld()->GetFirstPlayerController()->GetHUD());
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Green, true, -1, 0, 5);
}

void AHuman_PaustSoulPiece::OnOverlapBegin(class AActor *OverlappedActor, class AActor *OtherActor)
{
	if (OtherActor->ActorHasTag(FName(TEXT("Human_Character"))))
	{
		if (OtherActor && (OtherActor != this))
		{
			PieceState = false;
			HUD_Human->CollectCount++;
			Destroy();
		}
	}
	else print("I can't collect the soul");
}
