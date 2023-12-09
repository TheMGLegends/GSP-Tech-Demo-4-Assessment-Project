// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAnimationController.h"

#include "CharacterController.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCharacterAnimationController::NativeInitializeAnimation()
{
	bIsAimedIn = false;
	
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}
}

void UCharacterAnimationController::CustomUpdateAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}
	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0);
		MoveSpeed = LateralSpeed.Size();
		Direction = UCharacterAnimationController::CalculateDirection(Pawn->GetVelocity(), Pawn->GetActorRotation());
		bIsInAir = Pawn->GetMovementComponent()->IsFalling();
		bIsAimedIn = Cast<ACharacterController>(Pawn)->GetIsAimedIn();
		if (bIsAimedIn)
		{
			Montage_Play(AimMontage);
		}
		else
		{
			Montage_Stop(0.25f, AimMontage);
		}
	}

}
