// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterAnimationController.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCharacterAnimationController::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}

	bIsDead = false;
	bIsAiming = false;
}

void UCharacterAnimationController::UpdateAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}

	// INFO: Gets all values needed for deciding which animation the character should play
	if (Pawn)
	{
		const FVector Speed = Pawn->GetVelocity();
		const FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0);
		MoveSpeed = LateralSpeed.Size();
		Direction = CalculateDirection(Pawn->GetVelocity(), Pawn->GetActorRotation());
		bIsInAir = Pawn->GetMovementComponent()->IsFalling();
		Pitch = Pawn->GetBaseAimRotation().Pitch;
	}

}
