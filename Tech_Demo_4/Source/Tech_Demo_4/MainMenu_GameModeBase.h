// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenu_GameModeBase.generated.h"

class UMainMenuWidget;

UCLASS()
class TECH_DEMO_4_API AMainMenu_GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void StartPlay() override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> MainMenuHUDOverlayAsset;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Widgets")
	UUserWidget* MainMenuHUDOverlay;
};
