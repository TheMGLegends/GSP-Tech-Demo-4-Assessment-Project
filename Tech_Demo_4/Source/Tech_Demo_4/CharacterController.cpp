// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"

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
	SpringArm->SetRelativeLocation(FVector(0, 0, 90));
	SpringArm->SetRelativeRotation((FRotator(0.0f, 0.0f, 0.0f)));

	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
	CharMove = GetCharacterMovement();
	bIsViewingRight = true;
	bIsAimedIn = false;
	Health = 200;
}

// Called when the game starts or when spawned
void ACharacterController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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

void ACharacterController::TakeDamage(int Damage)
{
	Health -= Damage;
}

void ACharacterController::MoveForward(float Value)
{
	if (Value)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ACharacterController::MoveRight(float Value)
{
	if (Value)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ACharacterController::LookUp(float Value)
{
	if (Value)
	{
		float Temp = SpringArm->GetRelativeRotation().Pitch + Value;
		
		if (Temp < 25 && Temp > -50)
		{
			SpringArm->AddLocalRotation(FRotator(Value, 0, 0));
		}
	}
}

void ACharacterController::LookRight(float Value)
{
	if (Value)
	{
		AddActorLocalRotation(FRotator(0, Value, 0));
	}
}

void ACharacterController::Jump()
{
	Super::Jump();
}

void ACharacterController::Shoot()
{
	if (bIsAimedIn)
	{
		PlayAnimMontage(ShootMontage);
	}
}

void ACharacterController::Aim()
{
	if (!bIsAimedIn)
	{
		AimIn();
	}
	else
	{
		AimOut();
	}
}

void ACharacterController::Reload()
{
	AimOut();
	PlayAnimMontage(ReloadMontage);
}

void ACharacterController::AimIn()
{
	if (CharMove != nullptr)
	{
		CharMove->MaxWalkSpeed = 300.0f;
	}
	SpringArm->TargetArmLength = 50.0f;
	bIsAimedIn = true;
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
	StopAnimMontage(ShootMontage);
	StopAnimMontage(AimMontage);
}

