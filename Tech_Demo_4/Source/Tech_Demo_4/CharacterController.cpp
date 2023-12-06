// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"

// Sets default values
ACharacterController::ACharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
		
	}
}

void ACharacterController::LookRight(float Value)
{
	if (Value)
	{
		AddActorLocalRotation(FRotator(0, Value, 0));
	}
}

void ACharacterController::LookUpRate(float Value)
{
}

void ACharacterController::LookRightRate(float Value)
{
}

void ACharacterController::Jump()
{
	Super::Jump();
}

