// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CharacterController.generated.h"

UCLASS()
class TECH_DEMO_4_API ACharacterController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void TakeDamage(int Damage);
	UAnimMontage* GetAimMontage() const { return AimMontage; }
	UAnimMontage* GetShootMontage() const { return ShootMontage; }

private:
	// Variable:
	UPROPERTY()
	UCharacterMovementComponent* CharMove;
	
	bool bIsViewingRight;
	bool bIsAimedIn;

	UPROPERTY(VisibleAnywhere, Category = "Health")
	int Health;
	
	// Axis Functions:
	void MoveForward(float Value);
	void MoveRight(float Value);
	
	void LookUp(float Value);
	void LookRight(float Value);

	// Action Functions:
	virtual void Jump() override;
	void Shoot();
	void Aim();
	void Reload();

	// Helper Functions:
	void AimIn();
	void AimOut();

	// Components:
	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* Camera;
	UPROPERTY(EditAnywhere, Category = "Spring Arm")
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* AimMontage;
	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ReloadMontage;
	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ShootMontage;
};
