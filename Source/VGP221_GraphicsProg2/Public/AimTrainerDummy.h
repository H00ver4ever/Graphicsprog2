#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AimTrainerDummy.generated.h"

UCLASS()
class VGP221_GRAPHICSPROG2_API AAimTrainerDummy : public AActor
{
    GENERATED_BODY()

public:
    AAimTrainerDummy();

protected:
    virtual void BeginPlay() override;

    // Components
    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* TargetMesh;

    UPROPERTY(VisibleAnywhere)
    class USphereComponent* HitCollider;

    // Random spawn volume
    UPROPERTY(EditAnywhere, Category = "Target")
    FVector SpawnBoxMin;

    UPROPERTY(EditAnywhere, Category = "Target")
    FVector SpawnBoxMax;

    // Time until respawn
    UPROPERTY(EditAnywhere, Category = "Target")
    float RespawnDelay = 1.0f;

    // Whether the target is currently visible
    bool bIsActive = true;

    FTimerHandle RespawnTimer;

public:

    UFUNCTION()
    void OnHit(
        UPrimitiveComponent* HitComp,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        FVector NormalImpulse,
        const FHitResult& Hit
    );

    void HideTarget();
    void RespawnTarget();
};