// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CharacterController.h"
#include "PickupController.h"
#include "PickupLocationController.h"
#include "GameFramework/GameModeBase.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Tech_Demo_4GameModeBase.generated.h"

class UCountdownWidget;
class APickupController;

UCLASS()
class TECH_DEMO_4_API ATech_Demo_4GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void StartPlay() override;
	
private:
	void Countdown();
	void RespawnPlayers();
	void SpawnPickup();
	void NewRound();
	void RestartLevel();

	UPROPERTY()
	TArray<ACharacterController*> Players;

	UPROPERTY()
	TArray<APickupLocationController*> PickupLocations;

	FTimerHandle TimerHandle;
	FTimerHandle TimerHandle2;
	
public:
	ATech_Demo_4GameModeBase();

	UPROPERTY(EditAnywhere, Category = "Materials")
	UMaterialInstanceConstant* BlueMaterial;
	UPROPERTY(EditAnywhere, Category = "Materials")
	UMaterialInstanceConstant* RedMaterial;
	
	UPROPERTY(EditAnywhere, Category = "Materials")
	TArray<UMaterialInstanceConstant*> Materials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> CharacterHUDOverlayAsset;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* CharacterHUDOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> CountdownTimerHUDOverlayAsset;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* CountdownTimerHUDOverlay;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer")
	int Minutes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer");
	int Seconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rounds")
	int MaxRounds;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Rounds")
	int Round;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Winner")
	FString WinnerName;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Winner")
	ESlateVisibility WinnerVisibility;
	
	UPROPERTY(EditAnywhere, Category = "Music")
	USoundBase* BattleMusic;

	UPROPERTY(EditAnywhere, Category = "Pickup Colors")
	UMaterialInstance* DoubleDamageMaterial;
	UPROPERTY(EditAnywhere, Category = "Pickup Colors")
	UMaterialInstance* AmmoMaterial;
	UPROPERTY(EditAnywhere, Category = "Pickup Colors")
	UMaterialInstance* RecoveryMaterial;

	UPROPERTY(EditAnywhere, Category = "Spawner Category")
	TSubclassOf<APickupController> PickupObject;
	
	UFUNCTION(BlueprintCallable, Category = "Timer")
	FText GetMinutes() const;
	UFUNCTION(BlueprintCallable, Category = "Timer")
	FText GetSeconds() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Round Over")
	ESlateVisibility RoundOverVisibility;
	
	int PickupsInLevel;
	
private:
	UPROPERTY(VisibleAnywhere, Category = "Audio")
	UAudioComponent* Audio;

};
