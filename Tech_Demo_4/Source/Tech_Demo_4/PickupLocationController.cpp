// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupLocationController.h"

// Sets default values
APickupLocationController::APickupLocationController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bIsOccupied = false;
	OccupyingPickup = nullptr;
}

// Called when the game starts or when spawned
void APickupLocationController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupLocationController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

