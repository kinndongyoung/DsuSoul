#include "Angel_InstallTrigger.h"
#include "AngelCharacter.h"
#include "DrawDebugHelpers.h"

AAngel_InstallTrigger::AAngel_InstallTrigger()
{
	OnActorBeginOverlap.AddDynamic(this, &AAngel_InstallTrigger::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AAngel_InstallTrigger::OnOverlapEnd);

	// Setting Install Mesh
	p_InstallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("INSTALL_MESH"));
	p_InstallMesh->SetupAttachment(GetCollisionComponent());
	p_InstallMesh->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.0f), FRotator(0.0f, 0.0f, 0.0f));
}

void AAngel_InstallTrigger::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
}

void AAngel_InstallTrigger::OnOverlapBegin(class AActor *OverlappedActor, class AActor *OtherActor)
{
	// 천사 이외에 적용 안돼도록 코드 수정 필요(태그 쓰면될듯)
	if (OtherActor && (OtherActor != this))
	{
		AAngelCharacter* pt_Angel = Cast<AAngelCharacter>(OtherActor);
		pt_Angel->isTrigger = true;
		printf("%d", pt_Angel->isTrigger);

		if (pt_Angel == nullptr) print("pt_User = null");
	}
}

void AAngel_InstallTrigger::OnOverlapEnd(class AActor *OverActor, class AActor *OtherActor)
{
	// 천사 이외에 적용 안돼도록 코드 수정 필요(태그 쓰면될듯)
	if (OtherActor && (OtherActor != this))
	{
		AAngelCharacter* pt_Angel = Cast<AAngelCharacter>(OtherActor);
		pt_Angel->isTrigger = false;
		printf("%d", pt_Angel->isTrigger);

		if (pt_Angel == nullptr) print("pt_User = null");
	}
}