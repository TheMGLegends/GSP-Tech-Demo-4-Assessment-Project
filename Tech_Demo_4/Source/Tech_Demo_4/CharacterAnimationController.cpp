// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAnimationController.h"

#include "CharacterController.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCharacterAnimationController::NativeInitializeAnimation()
{
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
		Pitch = Pawn->GetBaseAimRotation().Pitch;

		if (Montage_IsPlaying(Cast<ACharacterController>(Pawn)->GetAimMontage()))
		{
			bIsAiming = true;
		}
		else
		{
			bIsAiming = false;
		}
	}

}
