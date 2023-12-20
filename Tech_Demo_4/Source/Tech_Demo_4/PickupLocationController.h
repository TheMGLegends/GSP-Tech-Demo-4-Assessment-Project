// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupLocationController.generated.h"

class APickupController;

UCLASS()
class TECH_DEMO_4_API APickupLocationController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupLocationController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Location Occupied")
	bool bIsOccupied;

	UPROPERTY(VisibleAnywhere, Category = "Occupying Pickup")
	APickupController* OccupyingPickup;

};
