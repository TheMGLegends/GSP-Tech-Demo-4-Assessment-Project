// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupLocationController.h"
#include "GameFramework/Actor.h"
#include "PickupController.generated.h"

UENUM()
enum EPickups
{
	DoubleDamage,
	Recovery,
	Ammo
};

UCLASS()
class TECH_DEMO_4_API APickupController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupController();
	virtual ~APickupController() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	static int PickupsInLevel;
	
	UPROPERTY(EditAnywhere, Category = "Pickup Location")
	APickupLocationController* PickupLocationController;

	UPROPERTY(EditAnywhere, Category = "Pickup Type")
	TEnumAsByte<EPickups> PickupType;
};
