// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupLocationController.h"
#include "Tech_Demo_4GameModeBase.h"
#include "GameFramework/Actor.h"
#include "PickupController.generated.h"

UENUM()
enum EPickups
{
	DoubleDamage,
	Recovery,
	Ammo
};

class ATech_Demo_4GameModeBase;

UCLASS()
class TECH_DEMO_4_API APickupController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupController();

protected:
	UFUNCTION()
	void OnBeginOverlapComponentEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere, Category = "Pickup Location")
	APickupLocationController* PickupLocationController;
	UPROPERTY(VisibleAnywhere, Category = "Game Mode")
	ATech_Demo_4GameModeBase* GameModeBase;

	UPROPERTY(VisibleAnywhere, Category = "Pickup Type")
	TEnumAsByte<EPickups> PickupType;

	UPROPERTY(VisibleAnywhere, Category = "Collider Mesh")
	UStaticMeshComponent* BoxCollider;
	
	UPROPERTY(EditAnywhere, Category = "SFX")
    USoundBase* PickupSFX;
};
