// Fill out your copyright notice in the Description page of Project Settings.


#include "CodedChar.h"
#include "HudWidget.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACodedChar::ACodedChar()
{
	{
		// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
		PrimaryActorTick.bCanEverTick = true;

		// This is a crash test comment to avoid crashes
		//int* CrashInt = nullptr;
		//UE_LOG(LogTemp, Warning, TEXT("%i"), *CrashInt);

		UE_LOG(LogTemp, Warning, TEXT("This is the player contructor being called"));

		if (!FPSCameraComponent) {
			FPSCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera")); // AddComponent in Unity
			FPSCameraComponent->SetupAttachment(CastChecked<USceneComponent, UCapsuleComponent>(GetCapsuleComponent()));
			FPSCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
			FPSCameraComponent->bUsePawnControlRotation = true;
		}

		if (!FPSMesh) {
			FPSMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
			FPSMesh->SetupAttachment(FPSCameraComponent);
			FPSMesh->bCastDynamicShadow = false;
			FPSMesh->CastShadow = false;
		}

		GetMesh()->SetOwnerNoSee(true);

	
	}
}

void ACodedChar::BeginPlay()
{
	Super::BeginPlay();

	HUDWidget = CreateWidget<UHudWidget>(GetWorld(), UHudWidget::StaticClass());

	if (HUDWidget)
	{
		HUDWidget->AddToViewport();
		UE_LOG(LogTemp, Warning, TEXT("HUD Widget created"));
	}
}

// Called every frame
void ACodedChar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GameTimer -= DeltaTime;
	if (GameTimer < 0.0f)
	{
		GameTimer = 0.0f;	
	}
	if (GameTimer <= 0.0f)
	{
		OnTimerFinished();
	}


	if (HUDWidget)
	{
		HUDWidget->UpdateTimer(GameTimer);
		HUDWidget->UpdateHits(HitCount);
	}

}

void ACodedChar::AddHit()
{
	HitCount++;

	if (HUDWidget)
	{
		HUDWidget->UpdateHits(HitCount);
	}
}

// Called to bind functionality to input
void ACodedChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &ACodedChar::MoveForwardDannyTest);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACodedChar::MoveRight);

	// Look
	PlayerInputComponent->BindAxis("LookHorizontal", this, &ACodedChar::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookVertical", this, &ACodedChar::AddControllerPitchInput);

	// Fire
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACodedChar::Fire);

	// Jump
	// Calling a function directly
	//PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::Jump);

	// Calling our own function
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACodedChar::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACodedChar::EndJump);
}

void ACodedChar::MoveForwardDannyTest(float value)
{
	// 1. Unreal tutorial way
	//FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);

	FVector Direction = GetActorForwardVector();
	AddMovementInput(Direction, value);
}

void ACodedChar::MoveRight(float value) {
	FVector Direction = GetActorRightVector();
	AddMovementInput(Direction, value);
}

void ACodedChar::StartJump()
{
	bPressedJump = true;
}

void ACodedChar::EndJump()
{
	bPressedJump = false;
}

void ACodedChar::Fire()
{
	if (!ProjectileClass) return;

	// Init relevant infomration for where the projectile will be
	FVector CameraLocation;
	FRotator CameraRotation;
	GetActorEyesViewPoint(CameraLocation, CameraRotation);

	MuzzleOffset.Set(100.0f, 0.0f, 0.0f);

	FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

	FRotator MuzzleRotation = CameraRotation;
	MuzzleRotation.Pitch += 10.0f;

	// Start of spawning the projectile
	UWorld* World = GetWorld();
	if (!World)  return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	// Unity Instantiate
	//AFPSProjectile* Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
	//if (!Projectile) return;

	// Launch spawned projectile in the camera rotation
	//FVector LaunchDirection = MuzzleRotation.Vector();
	//Projectile->FireInDirection(LaunchDirection);

}

void ACodedChar::OnTimerFinished()
{

	UGameplayStatics::OpenLevel(GetWorld(), FName("EndGame"));
}

