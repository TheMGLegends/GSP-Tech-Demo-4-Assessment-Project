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
	void GetDamaged(int Damage);
	void Heal(int HealAmount);
	void IncrementAmmo(int IncrementAmount);
	void Respawn();
	void ActivateDoubleDamage();
	bool GetIsDead() const { return bIsDead; }
	bool GetIsAimedIn() const;
	
	UAnimMontage* GetAimMontage() const { return AimMontage; }
	UAnimMontage* GetShootMontage() const { return ShootMontage; }

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Name")
	FString Name;

	UPROPERTY(EditAnywhere, Category = "Health")
	float MaxHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Health")
	float Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Health")
	float HealthPercentage;

	UPROPERTY(EditAnywhere, Category = "Ammo")
	int ClipSize;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Ammo")
	int Ammo;
	UPROPERTY(EditAnywhere, Category = "Ammo")
	int MaxClips;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Ammo")
	int Clips;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Ammo")
	float RemainingAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
	int Score;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Aiming")
	ESlateVisibility CrosshairVisible;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Reloading")
	ESlateVisibility ReloadVisible;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character Widget")
	UCharacterWidget* CharacterWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Buffs")
	bool bDoubleDamageActive;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Buffs")
	ESlateVisibility DoubleDamageVisible;

	UPROPERTY(EditAnywhere, Category = "Damage Multiplier")
	int DamageMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Buffs")
	// ReSharper disable once CppUE4CodingStandardNamingViolationWarning
	int DDTimeRemaining;

	FTransform Origin;

	UPROPERTY(EditAnywhere, Category = "Camera")
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Grenade")
	TSubclassOf<class AGrenadeController> GrenadeAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grenade")
	int GrenadesRemaining;

	UPROPERTY(VisibleAnywhere, Category = "Can Be Damaged")
	bool bCanGetDamaged;

private:
	// Variable:
	UPROPERTY()
	UCharacterMovementComponent* CharMove;
	
	bool bIsAimedIn;
	bool bIsDead;
	bool bHasShot;
	bool bIsReloading;
	bool bIsShooting;

	UPROPERTY(EditAnywhere, Category = "Timers")
	float ShotDuration;
	float CurrentShotInterval;

	UPROPERTY(EditAnywhere, Category = "Timers")
	float ReloadDuration;
	float CurrentReloadInterval;

	UPROPERTY(EditAnywhere, Category = "Buffs")
	float DoubleDamageDuration;
	float CurrentDoubleDamageInterval;
	
	// Axis Functions:
	void MoveForward(float Value);
	void MoveRight(float Value);
	
	void LookUp(float Value);
	void LookRight(float Value);

	// Action Functions:
	virtual void Jump() override;
	void Shoot();
	void StopShoot();
	void Reload();
	void ThrowGrenade();
	void Aim();

	// Helper Functions:
	void AimIn();
	void AimOut();

	// Components:
	UPROPERTY(EditAnywhere, Category = "Spring Arm")
	USpringArmComponent* SpringArm;
	UPROPERTY(EditAnywhere, Category = "Animation Controller")
	UCharacterAnimationController* AnimationController;
	UPROPERTY(EditAnywhere, Category = "Skeletal Mesh")
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<class AWeaponController> WeaponAsset;

	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* AimMontage;
	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ReloadMontage;
	UPROPERTY(EditAnywhere, Category = "Montages")
	UAnimMontage* ShootMontage;

	UPROPERTY(EditAnywhere, Category = "SFX")
	USoundBase* ShotSFX;
	UPROPERTY(EditAnywhere, Category = "SFX")
	USoundBase* DeathSFX;
};
