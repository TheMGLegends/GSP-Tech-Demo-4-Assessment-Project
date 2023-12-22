// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponController.h"
#include "DrawDebugHelpers.h"

// Sets default values
AWeaponController::AWeaponController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Player = nullptr;
	bLaserBeamCreated = false;
	Laser = nullptr;
	LaserStartingPosition = nullptr;
}

// Called when the game starts or when spawned
void AWeaponController::BeginPlay()
{
	Super::BeginPlay();

	if (USpotLightComponent* SpotLight = FindComponentByClass<USpotLightComponent>())
	{
		Laser = SpotLight;
	}

	if (UStaticMeshComponent* SMComp = FindComponentByClass<UStaticMeshComponent>())
	{
		LaserStartingPosition = SMComp;
	}

	if (Player)
	{
		Laser->SetWorldRotation(Player->GetControlRotation());
	}
}

// Called every frame
void AWeaponController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Laser->IsVisible() && !Player->GetIsAimedIn())
	{
		Laser->SetVisibility(false);
	}
	else if (!Laser->IsVisible() && Player->GetIsAimedIn())
	{
		Laser->SetVisibility(true);
	}

	if (Player->GetIsAimedIn())
	{
		FHitResult Hit;
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(this);
		CollisionParams.AddIgnoredActor(Player);
		
		FVector Start = LaserStartingPosition->GetComponentLocation();
		FVector ForwardVector = Player->Camera->GetForwardVector();
		FVector End = Start + (ForwardVector * 2000.0f);

		bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, CollisionParams);

		DrawDebugLine(GetWorld(), Start, bHit ? Hit.ImpactPoint : End, FColor::Green, false, 0, 0, 2);

		if (bHit)
		{
			DrawDebugPoint(GetWorld(), Hit.ImpactPoint, 5.0f, FColor::Green, false, 0, 0);
		}
		
	}
}

