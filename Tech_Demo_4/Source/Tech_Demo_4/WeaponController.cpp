// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponController.h"
#include "Components/ArrowComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AWeaponController::AWeaponController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bLaserCreated = false;
	
	Player = nullptr;
	LaserAsset = nullptr;
	Arrow = nullptr;
	Laser = nullptr;
}

// Called when the game starts or when spawned
void AWeaponController::BeginPlay()
{
	Super::BeginPlay();

	if (UArrowComponent* ArrowComponent = FindComponentByClass<UArrowComponent>())
	{
		Arrow = ArrowComponent;
	}
}

// Called every frame
void AWeaponController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (!bLaserCreated)
	{
		Laser = UGameplayStatics::SpawnEmitterAttached(LaserAsset, Arrow);
		bLaserCreated = true;
	}
	else
	{
		FVector Start = Arrow->GetComponentLocation();
		FVector ForwardVector = Player->Camera->GetForwardVector();
		FVector End = Start + (ForwardVector * 10000.0f);

		Laser->SetBeamSourcePoint(0, Start, 0);

		FHitResult Hit;
		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(this->GetOwner());
		if (Player)
		{
			CollisionParams.AddIgnoredActor(Player->GetOwner());
		}

		bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, CollisionParams);
    
		if (bHit)
		{
			Laser->SetBeamTargetPoint(0, Hit.Location, 0);
		}
		else
		{
			Laser->SetBeamTargetPoint(0, Hit.TraceEnd, 0);
		}
	}

	if (Player->GetIsAimedIn())	
	{
		Laser->SetVisibility(true);
	}
	else
	{
		Laser->SetVisibility(false);
	}
}

