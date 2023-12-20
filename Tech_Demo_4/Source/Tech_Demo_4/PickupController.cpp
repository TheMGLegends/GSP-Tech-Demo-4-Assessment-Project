// Fill out your copyright notice in the Description page of Project Settings.

#include "PickupController.h"

int APickupController::PickupsInLevel = 0;

// Sets default values
APickupController::APickupController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PickupLocationController = nullptr;
	PickupsInLevel++;

	const int RandomInt = FMath::RandRange(0, 2);
	uint8 RandomByte = static_cast<uint8>(RandomInt);
	PickupType = static_cast<EPickups>(RandomByte);
}

APickupController::~APickupController()
{
	PickupsInLevel--;
}

// Called when the game starts or when spawned
void APickupController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

