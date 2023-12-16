// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CharacterController.h"
#include "GameFramework/GameModeBase.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Tech_Demo_4GameModeBase.generated.h"

UCLASS()
class TECH_DEMO_4_API ATech_Demo_4GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void StartPlay() override;
	void Countdown();

	UPROPERTY()
	TArray<ACharacterController*> Players;
	
public:
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
	
	UPROPERTY(EditAnywhere, Category = "Timer")
	int Minutes = 3;

	int Seconds = 0;
};
