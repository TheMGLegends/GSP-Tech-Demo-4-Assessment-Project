// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterController.h"
#include "CharacterWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACharacterController::ACharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetRelativeLocation(FVector(0, 20, 0));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->TargetArmLength = 150.0f;
	SpringArm->SetRelativeLocation(FVector(0, 25, 90));
	SpringArm->SetRelativeRotation((FRotator(0.0f, 0.0f, 0.0f)));

	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
	
	CharMove = GetCharacterMovement();
	bIsAimedIn = false;
	bIsDead = false;
	bHasShot = false;
	
	ShotDuration = 1.2f;
	CurrentShotInterval = 0.0f;

	ReloadDuration = 3.3f;
	CurrentReloadInterval = 0.0f;
	
	MaxHealth = 200.0f;
	Health = MaxHealth;
	HealthPercentage = Health / MaxHealth;

	ClipSize = 10;
	Ammo = ClipSize;
	Clips = 2;

	Score = 0;

	CrosshairVisible = ESlateVisibility::Hidden;
	ReloadVisible = ESlateVisibility::Hidden;
}

// Called when the game starts or when spawned
void ACharacterController::BeginPlay()
{
	Super::BeginPlay();

	Origin = GetActorTransform();

	UE_LOG(LogTemp, Warning, TEXT("Initial Location: %s"), *Origin.ToString());

	if (const USkeletalMeshComponent* MeshComponent = FindComponentByClass<USkeletalMeshComponent>())
    {
    	if (UAnimInstance* AnimInstance = MeshComponent->GetAnimInstance())
    	{
    		AnimationController = Cast<UCharacterAnimationController>(AnimInstance);
    	}
    }
}

// Called every frame
void ACharacterController::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	if ((bIsAimedIn || bIsDead) && bIsReloading)
	{
		CurrentReloadInterval = 0.0f;
		bIsReloading = false;
	}

	if (bHasShot)
	{
		CurrentShotInterval += DeltaTime;

		if (CurrentShotInterval > ShotDuration)
		{
			CurrentShotInterval = 0.0f;
			bHasShot = false;
		}
	}

	if (bIsReloading)
	{
		CurrentReloadInterval += DeltaTime;

		if (CurrentReloadInterval > ReloadDuration)
		{
			CurrentReloadInterval = 0.0f;
			
			Ammo = ClipSize;
			Clips--;
			
			bIsReloading = false;
		}
	}

	if (AnimationController->Montage_IsPlaying(ReloadMontage) && ReloadVisible == ESlateVisibility::Hidden)
	{
		ReloadVisible = ESlateVisibility::Visible;
	}
	else if (!AnimationController->Montage_IsPlaying(ReloadMontage) && ReloadVisible != ESlateVisibility::Hidden)
	{
		ReloadVisible = ESlateVisibility::Hidden;
	}
}

// Called to bind functionality to input
void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Axis Bindings:
	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterController::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterController::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &ACharacterController::LookUp);
	PlayerInputComponent->BindAxis("LookRight", this, &ACharacterController::LookRight);

	// Action Bindings:
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacterController::Jump);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ACharacterController::Shoot);
	
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ACharacterController::Aim);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ACharacterController::Reload);
}

void ACharacterController::TakeDamage(const int Damage)
{
	if (Health > 0)
	{
		if (CharacterWidget != nullptr)
		{
			CharacterWidget->Fade();
		}
		Health -= Damage;
		HealthPercentage = Health / MaxHealth;
		
		if (Health <= 0)
		{
			bIsDead = true;
			AimOut();

			if (AnimationController != nullptr)
			{
				AnimationController->bIsDead = true;
			}
		
			StopAnimMontage();
		}
	}
}

void ACharacterController::Respawn()
{
	bIsDead = false;
	
	SetActorTransform(Origin);
	AimOut();
	Camera->SetRelativeLocation(FVector(0, 20, 0));
	
	SpringArm->SetRelativeLocation(FVector(0, 25, 90));
	SpringArm->SetRelativeRotation((FRotator(0.0f, 0.0f, 0.0f)));
	
	bHasShot = false;
	
	Health = MaxHealth;
	HealthPercentage = Health / MaxHealth;

	Ammo = ClipSize;
	Clips = 2;
}

void ACharacterController::MoveForward(const float Value)
{
	if (Value && !bIsDead)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ACharacterController::MoveRight(const float Value)
{
	if (Value && !bIsDead)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ACharacterController::LookUp(const float Value)
{
	if (Value && !bIsDead)
	{
		const float Temp = SpringArm->GetRelativeRotation().Pitch + Value;
		
		if (Temp < 25 && Temp > -50)
		{
			SpringArm->AddLocalRotation(FRotator(Value, 0, 0));
		}
	}
}

void ACharacterController::LookRight(const float Value)
{
	if (Value && !bIsDead)
	{
		AddActorLocalRotation(FRotator(0, Value, 0));
	}
}

void ACharacterController::Jump()
{
	if (!bIsDead)
	{
		Super::Jump();
	}
}

void ACharacterController::Shoot()
{
	if (bIsAimedIn && !bHasShot && !bIsDead && Ammo > 0)
	{
		// Testing Code:
		TakeDamage(10);
		GLog->Logf(TEXT("Current Health: %f"), Health);
		// ------------------------------------------------

		Ammo--;
		bHasShot = true;
		PlayAnimMontage(ShootMontage);
	}
}

void ACharacterController::Aim()
{
	if (!bIsAimedIn && !bIsDead)
	{
		AimIn();
	}
	else if (bIsAimedIn && !bIsDead)
	{
		AimOut();
	}
}

void ACharacterController::Reload()
{
	if (!bIsDead && Clips > 0 && Ammo < ClipSize)
	{
		AimOut();
		bIsReloading = true;
		PlayAnimMontage(ReloadMontage);
	}
}

void ACharacterController::AimIn()
{
	if (CharMove != nullptr)
	{
		CharMove->MaxWalkSpeed = 300.0f;
	}
	SpringArm->TargetArmLength = 75.0f;
	bIsAimedIn = true;

	if (AnimationController != nullptr)
	{
		AnimationController->bIsAiming = bIsAimedIn;
	}

	CrosshairVisible = ESlateVisibility::Visible;

	PlayAnimMontage(AimMontage);
}

void ACharacterController::AimOut()
{
	if (CharMove != nullptr)
	{
		CharMove->MaxWalkSpeed = 600.0f;
	}
	SpringArm->TargetArmLength = 150.0f;
	bIsAimedIn = false;

	if (AnimationController != nullptr)
	{
		AnimationController->bIsAiming = bIsAimedIn;
	}

	CrosshairVisible = ESlateVisibility::Hidden;

	StopAnimMontage();
}

