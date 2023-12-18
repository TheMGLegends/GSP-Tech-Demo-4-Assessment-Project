// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tech_Demo_4GameModeBase.h"

#include "CharacterWidget.h"
#include "CountdownWidget.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"

ATech_Demo_4GameModeBase::ATech_Demo_4GameModeBase()
{
	BlueMaterial = nullptr;
	RedMaterial = nullptr;
	
	CharacterHUDOverlay = nullptr;
	CountdownTimerHUDOverlay = nullptr;
	
	Minutes = 3;
	Seconds = 0;

	MaxRounds = 5;
	Round = 1;
	
	WinnerVisibility = ESlateVisibility::Hidden;
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
		
		if (Materials[Index] == RedMaterial)
		{
			Cast<ACharacterController>(Players[Index])->Name = "Red";
		}
		else if (Materials[Index] == BlueMaterial)
		{
			Cast<ACharacterController>(Players[Index])->Name = "Blue";
		}

		UE_LOG(LogTemp, Warning, TEXT("Character Name: %s"), *Cast<ACharacterController>(Players[Index])->Name);
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
			GetWorldTimerManager().ClearTimer(TimerHandle);

			if (Players.Num() == 2)
			{
				if (Players[0]->Health > Players[1]->Health)
				{
					Players[0]->Score++;
				}
				else if (Players[0]->Health < Players[1]->Health)
				{
					Players[1]->Score++;
				}
	
				Round++;
				
				if (Round > MaxRounds)
				{
					if (Players[0]->Score > Players[1]->Score)
					{
						WinnerName = Players[0]->Name;
					}
					else if (Players[0]->Score < Players[1]->Score)
					{
						WinnerName = Players[1]->Name;
					}
					else
					{
						WinnerName = "No-one";
					}
					
					WinnerVisibility = ESlateVisibility::Visible;
				}
			}

			
			GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::RespawnPlayers, 5.0f, false);
		}
	}
}

void ATech_Demo_4GameModeBase::RespawnPlayers()
{
	GetWorldTimerManager().ClearTimer(TimerHandle);

	for (uint8 Index = 0; Index < Players.Num(); ++Index)
	{
		Players[Index]->Respawn();
	}

	Minutes = 3;
	Seconds = 0;
	
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::Countdown, 1.0f, true, 0.0f);
}