// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tech_Demo_4GameModeBase.h"

#include "CharacterWidget.h"
#include "CountdownWidget.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"
#include "Components/AudioComponent.h"
#include "GameFramework/PlayerStart.h"

ATech_Demo_4GameModeBase::ATech_Demo_4GameModeBase()
{
	BlueMaterial = nullptr;
	RedMaterial = nullptr;
	
	CharacterHUDOverlay = nullptr;
	CountdownTimerHUDOverlay = nullptr;
	
	BattleMusic = nullptr;

	Audio = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	
	Minutes = 3;
	Seconds = 0;

	MaxRounds = 5;
	Round = 1;

	PickupsInLevel = 0;
	
	WinnerVisibility = ESlateVisibility::Hidden;
	RoundOverVisibility = ESlateVisibility::Hidden;
}

FText ATech_Demo_4GameModeBase::GetMinutes() const
{
	FNumberFormattingOptions FormattingOptions;
	FormattingOptions.MinimumIntegralDigits = 2;
	FormattingOptions.MaximumIntegralDigits = 2;
	
	return FText::AsNumber(Minutes, &FormattingOptions);
}

FText ATech_Demo_4GameModeBase::GetSeconds() const
{
	FNumberFormattingOptions FormattingOptions;
	FormattingOptions.MinimumIntegralDigits = 2;
	FormattingOptions.MaximumIntegralDigits = 2;
	
	return FText::AsNumber(Seconds, &FormattingOptions);
}

void ATech_Demo_4GameModeBase::StartPlay()
{
	Super::StartPlay();

	Audio->SetVolumeMultiplier(0.075f);

	if (BattleMusic != nullptr)
	{
		Audio->SetSound(BattleMusic);
	}

	Audio->Play();

	// INFO: Set the timers for counting down and spawning pickups
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::Countdown, 1.0f, true, 0.0f);
	GetWorldTimerManager().SetTimer(TimerHandle2, this, &ATech_Demo_4GameModeBase::SpawnPickup, 15.0f, true, 0.0f);

	// INFO: Countdown HUD Widget Creation (Single HUD)
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

	// INFO: Stores all Actors of specified type in PickupLocations TArray so they can be accessed later
	for (TActorIterator<APickupLocationController> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		APickupLocationController* PickupLocationController = *ActorIterator;

		if (PickupLocationController != nullptr)
		{
			PickupLocations.Emplace(PickupLocationController);
		}
	}

	// INFO: Finds all Actors of specified type and saves them in the Players TArray for later use
	// also creates character HUD overlays for each instance and displays it on their respective sections
	// of the screen
	for(TActorIterator<ACharacterController> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		ACharacterController* CharacterController = *ActorIterator;

		if (CharacterController != nullptr && CharacterController->ActorHasTag(TEXT("Player")))
		{
			Players.Emplace(CharacterController);
			
			if (CharacterController->GetController())
			{
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

	// INFO: Gets all APlayerStart Actors and then spawns the players based on the player start actor positions
	TArray<APlayerStart*> PlayerStarts;

	for(TActorIterator<APlayerStart> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		APlayerStart* PlayerStart = *ActorIterator;
		PlayerStarts.Emplace(PlayerStart);
	}

	for (uint8 Index = 0; Index < PlayerStarts.Num(); ++Index)
	{
		Players[Index]->SetActorTransform(PlayerStarts[Index]->GetActorTransform());
	}

	// INFO: Dynamically sets the materials of the players at run-time as well as the players identifier based on the
	// material they received
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
	}
}

void ATech_Demo_4GameModeBase::Countdown()
{
	// INFO: Before anything else, checks whether any players are dead so that the round can be stopped prematurely
	// before the timer runs out
	for (uint8 Index = 0; Index < Players.Num(); ++Index)
	{
		if (Players[Index]->GetIsDead())
		{
			NewRound();
		}
	}
	
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
			NewRound();
		}
	}
}

void ATech_Demo_4GameModeBase::RespawnPlayers()
{
	GetWorldTimerManager().ClearTimer(TimerHandle);
	Audio->Play();
	
	for (uint8 Index = 0; Index < Players.Num(); ++Index)
	{
		Players[Index]->Respawn();
		Players[Index]->CustomTimeDilation = 1.0f;
	}

	Minutes = 3;
	Seconds = 0;

	// INFO: Resets all pickup locations and destroys any pickups that they may contain in-preparation for the next round
	for (uint8 Index = 0; Index < PickupLocations.Num(); ++Index)
	{
		if (PickupLocations[Index]->bIsOccupied)
		{
			PickupLocations[Index]->OccupyingPickup->Destroy();
			PickupLocations[Index]->OccupyingPickup = nullptr;
			PickupLocations[Index]->bIsOccupied = false;
		}
	}
	
	PickupsInLevel = 0;
	RoundOverVisibility = ESlateVisibility::Hidden;
	
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::Countdown, 1.0f, true, 0.0f);
	GetWorldTimerManager().SetTimer(TimerHandle2, this, &ATech_Demo_4GameModeBase::SpawnPickup, 15.0f, true, 0.0f);
}

void ATech_Demo_4GameModeBase::SpawnPickup()
{
	if (PickupsInLevel < 4)
	{
		bool bLocationChosen = false;

		while (!bLocationChosen)
		{
			const int Random = FMath::RandRange(0, PickupLocations.Num() - 1);
			
			if (!PickupLocations[Random]->bIsOccupied && PickupObject != nullptr)
			{
				bLocationChosen = true;
				
				const FActorSpawnParameters SpawnParameters;
				PickupLocations[Random]->bIsOccupied = true;
				APickupController* PickupInstance = GetWorld()->SpawnActor<APickupController>(PickupObject, PickupLocations[Random]->GetActorLocation(), FRotator(0), SpawnParameters);
				PickupsInLevel++;
				
				PickupInstance->PickupLocationController = PickupLocations[Random];
				PickupLocations[Random]->OccupyingPickup = PickupInstance;
				PickupInstance->GameModeBase = this;

				UStaticMeshComponent* Cube = PickupInstance->FindComponentByClass<UStaticMeshComponent>();

				// INFO: Changes material based on the type of pickup that has been spawned, this pickup type is
				// randomized
				switch (FMath::RandRange(0, 2))
				{
				case 0:
					PickupInstance->PickupType = EPickups::DoubleDamage;
					if (Cube)
					{
						Cube->SetMaterial(0, DoubleDamageMaterial);
					}
					break;
				case 1:
					PickupInstance->PickupType = EPickups::Recovery;
					if (Cube)
					{
						Cube->SetMaterial(0, RecoveryMaterial);
					}
					break;
				case 2:
					PickupInstance->PickupType = EPickups::Ammo;
					if (Cube)
					{
						Cube->SetMaterial(0, AmmoMaterial);
					}
					break;
				default:
					break;
				}
			}
		}
	}
}

void ATech_Demo_4GameModeBase::NewRound()
{
	GetWorldTimerManager().ClearTimer(TimerHandle);
	GetWorldTimerManager().ClearTimer(TimerHandle2);
	Audio->AdjustVolume(4.0f, 0.0f, EAudioFaderCurve::Linear);

	for (uint8 Index = 0; Index < Players.Num(); ++Index)
	{
		Players[Index]->CustomTimeDilation = 0.1f;
		Players[Index]->bCanGetDamaged = false;
	}
	
	Round++;

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
	}

	if (Round <= MaxRounds)
	{
		RoundOverVisibility = ESlateVisibility::Visible;
	}
	// INFO: Displays winner text after the final round has ended
	else if (Round > MaxRounds)
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
		
		GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::RestartLevel, 5.0f, false);
		return;
	}
			
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::RespawnPlayers, 5.0f, false);
}

void ATech_Demo_4GameModeBase::RestartLevel()
{
	// INFO: Restarts the entire game
	Round = 1;
	WinnerVisibility = ESlateVisibility::Hidden;

	for (uint8 Index = 0; Index < Players.Num(); ++Index)
	{
		Players[Index]->Score = 0;
		Players[Index]->CustomTimeDilation = 1.0f;
	}
	
	RespawnPlayers();
}
