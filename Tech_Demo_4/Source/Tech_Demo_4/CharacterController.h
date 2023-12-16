// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationController.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "CharacterController.generated.h"

class UCharacterWidget;

UCLASS()
class TECH_DEMO_4_API ACharacterController : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterController();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	void TakeDamage(int Damage);
	void Respawn();
	bool GetIsDead() const { return bIsDead; }
	
	UAnimMontage* GetAimMontage() const { return AimMontage; }
	UAnimMontage* GetShootMontage() const { return ShootMontage; }


	UPROPERTY(EditAnywhere, Category = "Health")
	float MaxHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float HealthPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming")
	ESlateVisibility CrosshairVisible;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Widget")
	UCharacterWidget* CharacterWidget;

	FTransform Origin;

private:
	// Variable:
	UPROPERTY()
	UCharacterMovementComponent* CharMove;
	
	bool bIsAimedIn;
	bool bIsDead;
	bool bHasShot;

	UPROPERTY(EditAnywhere, Category = "Timers")
	float ShotDuration;
	float CurrentShotInterval;
	
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
	UPROPERTY(EditAnywhere, Category = "Animation Controller")
	UCharacterAnimationController* AnimationController;

	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* AimMontage;
	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ReloadMontage;
	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ShootMontage;
};
