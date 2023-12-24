// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimationController.generated.h"

UCLASS()
class TECH_DEMO_4_API UCharacterAnimationController : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	
	UFUNCTION(BlueprintCallable, Category= "Animation")
	void UpdateAnimation();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animation")
	bool bIsInAir;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animation")
	bool bIsDead;
	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animation")
	bool bIsAiming;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animation")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animation")
	float Direction;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animation")
	float Pitch;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Animation")
	class APawn* Pawn;
};
