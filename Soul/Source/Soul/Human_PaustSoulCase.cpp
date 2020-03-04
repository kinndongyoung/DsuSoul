#include "Human_PaustSoulCase.h"
#include "HumanCharacter.h"
#include "HUD_Human.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Public/EngineUtils.h"

AHuman_PaustSoulCase::AHuman_PaustSoulCase()
{
	OnActorBeginOverlap.AddDynamic(this, &AHuman_PaustSoulCase::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AHuman_PaustSoulCase::OnOverlapEnd);

	// Setting Install Mesh
	p_PaustCaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PAUSTCASE_MESH"));
	p_PaustCaseMesh->SetupAttachment(GetCollisionComponent());

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_ANGEL_INSTALL_SPACE(TEXT("/Game/Project_Soul/Mesh/PaustSpace"));
	if (SM_ANGEL_INSTALL_SPACE.Succeeded())
		p_PaustCaseMesh->SetStaticMesh(SM_ANGEL_INSTALL_SPACE.Object);

	p_PaustCaseMesh->SetWorldScale3D(FVector(0.2f, 0.2f, 0.2f));
	p_PaustCaseMesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
}

void AHuman_PaustSoulCase::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Cyan, true, -1, 0, 5);
}

void AHuman_PaustSoulCase::OnOverlapBegin(class AActor *OverlappedActor, class AActor *OtherActor)
{
	if (OtherActor->ActorHasTag(FName(TEXT("Human_Character"))))
	{
		if (OtherActor && (OtherActor != this))
		{
			AHumanCharacter* pt_Human = Cast<AHumanCharacter>(OtherActor);
			if (pt_Human == nullptr) print("pt_Human = null");

			pt_Human->pt_Trigger = Cast<AHuman_PaustSoulCase>(OverlappedActor);
			pt_Human->isTrigger = true;			
		}
	}
	else print("I can't contact the Paust");
}

void AHuman_PaustSoulCase::OnOverlapEnd(class AActor *OverActor, class AActor *OtherActor)
{
	if (OtherActor->ActorHasTag(FName(TEXT("Human_Character"))))
	{
		if (OtherActor && (OtherActor != this))
		{
			AHumanCharacter* pt_Human = Cast<AHumanCharacter>(OtherActor);
			if (pt_Human == nullptr) print("pt_Human = null");

			pt_Human->isTrigger = false;
			pt_Human->HUDHuman->Human_Collect_State = false;
			pt_Human->HUDHuman->HUD_CollectBar();			
		}
	}
	else print("I can't contact the Paust");
}