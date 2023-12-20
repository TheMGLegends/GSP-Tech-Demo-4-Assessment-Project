// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupController.h"
#include "CharacterController.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickupController::APickupController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GameModeBase = nullptr;
	PickupLocationController = nullptr;
	BoxCollider = nullptr;
	PickupSFX = nullptr;

	const int RandomInt = FMath::RandRange(0, 2);
	uint8 RandomByte = static_cast<uint8>(RandomInt);
	PickupType = static_cast<EPickups>(RandomByte);
}

void APickupController::OnBeginOverlapComponentEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<ACharacterController>(OtherActor))
	{
		ACharacterController* CharacterController = Cast<ACharacterController>(OtherActor);
		
		GameModeBase->PickupsInLevel--;
		UGameplayStatics::PlaySoundAtLocation(this, PickupSFX, GetActorLocation(), 0.5f);
		
		switch(PickupType)
		{
		case EPickups::DoubleDamage:
			CharacterController->ActivateDoubleDamage();
			break;
		case EPickups::Recovery:
			CharacterController->Heal(50);
			break;
		case EPickups::Ammo:
			CharacterController->IncrementAmmo(20);
			break;
		default:
			break;
		}
		Destroy();
	}
}

// Called when the game starts or when spawned
void APickupController::BeginPlay()
{
	Super::BeginPlay();
	BoxCollider = FindComponentByClass<UStaticMeshComponent>();

	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &APickupController::OnBeginOverlapComponentEvent);
}

// Called every frame
void APickupController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

