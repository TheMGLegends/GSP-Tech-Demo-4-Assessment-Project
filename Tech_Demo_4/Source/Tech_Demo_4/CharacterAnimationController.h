// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimationController.generated.h"

/**
 * 
 */
UCLASS()
class TECH_DEMO_4_API UCharacterAnimationController : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	
	UFUNCTION(BlueprintCallable, Category="CustomAnim")
	void CustomUpdateAnimation();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustomAnim")
	bool bIsInAir;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustomAnim")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustomAnim")
	float Direction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustomAnim")
	bool bIsAimedIn;

	UPROPERTY(EditAnywhere, Category = "Action Animations")
	UAnimMontage* AimMontage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "CustomAnim")
	class APawn* Pawn;

};
