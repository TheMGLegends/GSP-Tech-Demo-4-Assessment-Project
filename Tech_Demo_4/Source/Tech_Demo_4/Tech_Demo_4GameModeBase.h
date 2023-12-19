// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CharacterController.h"
#include "GameFramework/GameModeBase.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Tech_Demo_4GameModeBase.generated.h"

class UCountdownWidget;

UCLASS()
class TECH_DEMO_4_API ATech_Demo_4GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void StartPlay() override;
	void Countdown();
	void RespawnPlayers();

	UPROPERTY()
	TArray<ACharacterController*> Players;

	FTimerHandle TimerHandle;
	
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* CharacterHUDOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> CountdownTimerHUDOverlayAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* CountdownTimerHUDOverlay;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer")
	int Minutes;
	UPROPERTY(BlueprintReadWrite, Category = "Timer");
	int Seconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rounds")
	int MaxRounds;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rounds")
	int Round;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Winner")
	FString WinnerName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Winner")
	ESlateVisibility WinnerVisibility;
	
	UPROPERTY(EditAnywhere, Category = "Music")
	USoundBase* BattleMusic;

private:
	UPROPERTY(EditAnywhere, Category = "Audio")
	UAudioComponent* Audio;
};
