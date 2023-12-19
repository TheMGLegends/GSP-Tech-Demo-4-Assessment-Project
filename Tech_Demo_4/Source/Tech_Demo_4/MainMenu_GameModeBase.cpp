// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu_GameModeBase.h"

#include "MainMenuWidget.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void AMainMenu_GameModeBase::StartPlay()
{
	Super::StartPlay();

	APlayerController* Controller = Cast<APlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	Controller->bShowMouseCursor = true;
	//Controller->bEnableClickEvents = true;
	//Controller->bEnableMouseOverEvents = true;

	if (MainMenuHUDOverlayAsset)
	{
		MainMenuHUDOverlay = CreateWidget<UUserWidget>(GetWorld(), MainMenuHUDOverlayAsset);
	}

	if (MainMenuHUDOverlay != nullptr)
	{
		MainMenuHUDOverlay->AddToViewport();
		MainMenuHUDOverlay->SetVisibility(ESlateVisibility::Visible);
		Cast<UMainMenuWidget>(MainMenuHUDOverlay)->GameModeBase = this;
	}
}
