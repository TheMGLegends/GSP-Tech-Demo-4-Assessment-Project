// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tech_Demo_4GameModeBase.h"

#include "CharacterWidget.h"
#include "CountdownWidget.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"

ATech_Demo_4GameModeBase::ATech_Demo_4GameModeBase()
{
	CharacterHUDOverlay = nullptr;
	CountdownTimerHUDOverlay = nullptr;
	
	Minutes = 3;
	Seconds = 0;
}

void ATech_Demo_4GameModeBase::StartPlay()
{
	Super::StartPlay();
	
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::Countdown, 1.0f, true, 0.0f);

	if (CountdownTimerHUDOverlayAsset)
	{
		CountdownTimerHUDOverlay = CreateWidget<UUserWidget>(GetWorld(), CountdownTimerHUDOverlayAsset);
	}

	if (CountdownTimerHUDOverlay != nullptr)
	{
		CountdownTimerHUDOverlay->AddToViewport();
		CountdownTimerHUDOverlay->SetVisibility(ESlateVisibility::Visible);
		Cast<UCountdownWidget>(CountdownTimerHUDOverlay)->GameModeBase = this;
	}
	
	for(TActorIterator<ACharacterController> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		ACharacterController* CharacterController = *ActorIterator;

		if (CharacterController != nullptr && CharacterController->ActorHasTag(TEXT("Player")))
		{
			Players.Emplace(CharacterController);
			
			if (CharacterController->GetController())
			{
				UE_LOG(LogTemp, Warning, TEXT("Found Actor"));
				
				if(CharacterHUDOverlayAsset)
				{
					CharacterHUDOverlay = CreateWidget<UUserWidget>(Cast<APlayerController>(CharacterController->GetController()), CharacterHUDOverlayAsset);
				}

				if (CharacterHUDOverlay != nullptr)
				{
					Cast<UCharacterWidget>(CharacterHUDOverlay)->CharacterPawn = CharacterController->GetController()->GetPawn();
					Cast<UCharacterWidget>(CharacterHUDOverlay)->CharacterController = CharacterController;
					CharacterController->CharacterWidget = Cast<UCharacterWidget>(CharacterHUDOverlay);
					CharacterHUDOverlay->AddToPlayerScreen();
					CharacterHUDOverlay->SetVisibility(ESlateVisibility::Visible);
				}
			}
		}
	}

	for (uint8 Index = 0; Index != Players.Num(); ++Index)
	{
		Players[Index]->FindComponentByClass<USkeletalMeshComponent>()->SetMaterial(1, Materials[Index]);
	}
}

void ATech_Demo_4GameModeBase::Countdown()
{
	if (Seconds != 0)
	{
		Seconds--;
	}
	else
	{
		if (Minutes != 0)
		{
			Minutes--;
			Seconds = 59;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Reached 0!"));
			GetWorldTimerManager().ClearTimer(TimerHandle);
			GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::RespawnPlayers, 5.0f, false);
			UE_LOG(LogTemp, Warning, TEXT("Started other timer"));
		}
	}
}

void ATech_Demo_4GameModeBase::RespawnPlayers()
{
	UE_LOG(LogTemp, Warning, TEXT("Started respawn!"));
	GetWorldTimerManager().ClearTimer(TimerHandle);

	for (uint8 i = 0; i < Players.Num(); ++i)
	{
		Players[i]->Respawn();
	}

	Minutes = 3;
	Seconds = 0;
	
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::Countdown, 1.0f, true, 0.0f);
}