#include "AimTrainerDummy.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"

AAimTrainerDummy::AAimTrainerDummy()
{
    PrimaryActorTick.bCanEverTick = false;

    HitCollider = CreateDefaultSubobject<USphereComponent>(TEXT("HitCollider"));
    RootComponent = HitCollider;
    HitCollider->InitSphereRadius(50.f);
    HitCollider->SetCollisionProfileName("BlockAll");

    TargetMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TargetMesh"));
    TargetMesh->SetupAttachment(RootComponent);

    // Default spawn volume
    SpawnBoxMin = FVector(-500.f, -500.f, 50.f);
    SpawnBoxMax = FVector(500.f, 500.f, 300.f);
}

void AAimTrainerDummy::BeginPlay()
{
    Super::BeginPlay();

    HitCollider->OnComponentHit.AddDynamic(this, &AAimTrainerDummy::OnHit);

    RespawnTarget(); // Spawn first target
}

void AAimTrainerDummy::OnHit(
    UPrimitiveComponent* HitComp,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    FVector NormalImpulse,
    const FHitResult& Hit
)
{
    if (!bIsActive)
        return;

    HideTarget();
}

void AAimTrainerDummy::HideTarget()
{
    bIsActive = false;

    TargetMesh->SetVisibility(false);
    HitCollider->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Respawn after delay
    GetWorldTimerManager().SetTimer(
        RespawnTimer,
        this,
        &AAimTrainerDummy::RespawnTarget,
        RespawnDelay,
        false
    );
}

void AAimTrainerDummy::RespawnTarget()
{
    // Random position inside bounding box
    FVector RandomPos = UKismetMathLibrary::RandomPointInBoundingBox(
        FVector (1610,60,520),
        FVector (200,100,400)
    );

    SetActorLocation(RandomPos);

    TargetMesh->SetVisibility(true);
    HitCollider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    bIsActive = true;
}
