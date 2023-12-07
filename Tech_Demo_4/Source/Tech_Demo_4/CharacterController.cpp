// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"

// Sets default values
ACharacterController::ACharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetRelativeLocation(FVector(0, 80, 60));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->TargetArmLength = 250.0f;
	SpringArm->SetRelativeLocation(FVector(0, 0, 20));
	SpringArm->SetRelativeRotation((FRotator(-15.0f, 0.0f, 0.0f)));

	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
	bIsViewingRight = true;
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
	PlayerInputComponent->BindAction("Aim", IE_Repeat, this, &ACharacterController::Aim);

	PlayerInputComponent->BindAction("LeftShoulder", IE_Pressed, this, &ACharacterController::LeftView);
	PlayerInputComponent->BindAction("RightShoulder", IE_Pressed, this, &ACharacterController::RightView);
	PlayerInputComponent->BindAction("SwitchShoulder", IE_Pressed, this, &ACharacterController::ChangeView);
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

		if (Temp < 25 && Temp > -25)
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
}

void ACharacterController::Aim()
{
}

void ACharacterController::SwitchView(float YChange)
{
	Camera->SetRelativeLocation(FVector(Camera->GetRelativeLocation().X, YChange, Camera->GetRelativeLocation().Z));
}

void ACharacterController::LeftView()
{
	if (bIsViewingRight)
	{
		SwitchView(-80);
		bIsViewingRight = false;
	}
}

void ACharacterController::RightView()
{
	if (!bIsViewingRight)
	{
		SwitchView(80);
		bIsViewingRight = true;
	}
}

void ACharacterController::ChangeView()
{
	if (bIsViewingRight)
	{
		LeftView();
	}
	else
	{
		RightView();
	}
}
