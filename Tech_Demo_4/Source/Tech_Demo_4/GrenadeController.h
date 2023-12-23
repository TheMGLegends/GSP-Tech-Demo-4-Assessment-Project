// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GrenadeController.generated.h"

UCLASS()
class TECH_DEMO_4_API AGrenadeController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrenadeController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Timer")
	float TimeUntilDetonation;

	UPROPERTY(EditAnywhere, Category = "SFX")
	USoundBase* ExplosionSFX;

	UPROPERTY(EditAnywhere, Category = "Grenade")
	TSubclassOf<class AExplosionController> ExplosionAsset;

private:
	bool bHasBlownUp;

};
