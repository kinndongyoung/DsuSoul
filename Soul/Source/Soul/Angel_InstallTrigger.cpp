#include "Angel_InstallTrigger.h"
#include "AngelCharacter.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Public/EngineUtils.h"

AAngel_InstallTrigger::AAngel_InstallTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &AAngel_InstallTrigger::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AAngel_InstallTrigger::OnOverlapEnd);

	// Setting Install Mesh
	p_InstallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("INSTALL_MESH"));
	p_InstallMesh->SetupAttachment(GetCollisionComponent());

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SM_ANGEL_INSTALL_SPACE(TEXT("/Game/Project_Soul/Mesh/InstallationSpace"));
	if (SM_ANGEL_INSTALL_SPACE.Succeeded())
		p_InstallMesh->SetStaticMesh(SM_ANGEL_INSTALL_SPACE.Object);
	
	p_InstallMesh->SetWorldScale3D(FVector(0.2f, 0.2f, 0.2f));
	p_InstallMesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));

	InstallState = true;
	InstallProcess = 0.0f;	
}

void AAngel_InstallTrigger::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Blue, true, -1, 0, 5);
}

void AAngel_InstallTrigger::OnOverlapBegin(class AActor *OverlappedActor, class AActor *OtherActor)
{
	if (OtherActor->ActorHasTag(FName(TEXT("Angel_Character"))))
	{
		if (OtherActor && (OtherActor != this) && InstallState == true)
		{
			AAngelCharacter* pt_Angel = Cast<AAngelCharacter>(OtherActor);
			pt_Angel->isTrigger = true;
			pt_Angel->pt_Trigger = Cast<AAngel_InstallTrigger>(OverlappedActor);

			if (pt_Angel == nullptr) print("pt_Angel = null");
		}
	}
	else print("I can't install");
}

void AAngel_InstallTrigger::OnOverlapEnd(class AActor *OverActor, class AActor *OtherActor)
{
	if (OtherActor->ActorHasTag(FName(TEXT("Angel_Character"))))
	{
		if (OtherActor && (OtherActor != this) && InstallState == true)
		{
			AAngelCharacter* pt_Angel = Cast<AAngelCharacter>(OtherActor);
			pt_Angel->isTrigger = false;

			if (pt_Angel == nullptr) print("pt_Angel = null");
		}
	}
	else print("I can't install");
}