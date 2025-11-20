// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CodedChar.generated.h"

class UHudWidget;

UCLASS()
class VGP221_GRAPHICSPROG2_API ACodedChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACodedChar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AddHit();
	void OnTimerFinished();

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FPSCameraComponent;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* FPSMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FVector MuzzleOffset;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class ACodedChar> ProjectileClass;

	UFUNCTION()
	void MoveForwardDannyTest(float value);

	UFUNCTION()
	void MoveRight(float value);

	UFUNCTION()
	void StartJump();

	UFUNCTION()
	void EndJump();

	UFUNCTION()
	void Fire();

private:
	UPROPERTY()
	UHudWidget* HUDWidget;

	float GameTimer = 30.0f;
	int32 HitCount = 0;
};
