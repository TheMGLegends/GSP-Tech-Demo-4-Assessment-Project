// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainMenu_GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

UCLASS()
class TECH_DEMO_4_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gamemode Base")
	AMainMenu_GameModeBase* GameModeBase;

	UFUNCTION(BlueprintCallable, Category = "Play Button Method")
	void PlayGame() const;
};
