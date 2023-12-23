// Fill out your copyright notice in the Description page of Project Settings.


#include "GrenadeController.h"

#include "CharacterController.h"
#include "DrawDebugHelpers.h"
#include "ExplosionController.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGrenadeController::AGrenadeController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TimeUntilDetonation = 5.0f;
	bHasBlownUp = false;
}

// Called when the game starts or when spawned
void AGrenadeController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGrenadeController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimeUntilDetonation -= DeltaTime;
	
	if (TimeUntilDetonation <= 0 && !bHasBlownUp)
	{
		bHasBlownUp = true;
		
		TArray<FHitResult> HitResults;
		FVector StartLocation = GetActorLocation();
		FVector EndLocation = StartLocation;
		
		FCollisionShape CollisionShape;
		CollisionShape.ShapeType = ECollisionShape::Sphere;
		CollisionShape.SetSphere(500);

		if (GetWorld()->SweepMultiByChannel(HitResults, StartLocation, EndLocation, FQuat(), ECC_PhysicsBody, CollisionShape))
		{
			TArray<ACharacterController*> HitActors;
			for (auto It = HitResults.CreateIterator(); It; ++It)
			{
				if (Cast<ACharacterController>(It->Actor) != nullptr)
				{
					bool bAlreadyHit = false;
					
					for (int Index = 0; Index < HitActors.Num(); ++Index)
					{
						if (Cast<ACharacterController>(It->Actor) == HitActors[Index])
						{
							bAlreadyHit = true;
						}
					}

					if (!bAlreadyHit)
					{
						Cast<ACharacterController>(It->Actor)->GetDamaged(100);
						HitActors.Emplace(Cast<ACharacterController>(It->Actor));
					}
				}
			}
		}

		AExplosionController* Explosion = GetWorld()->SpawnActor<AExplosionController>(ExplosionAsset, GetActorLocation(), FRotator(0));
		Explosion->SetLifeSpan(2);

		UGameplayStatics::PlaySoundAtLocation(this, ExplosionSFX, GetActorLocation(), 0.75f);

		Destroy();
	}
}

