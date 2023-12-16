// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tech_Demo_4GameModeBase.h"

#include "CharacterWidget.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"

void ATech_Demo_4GameModeBase::StartPlay()
{
	Super::StartPlay();

	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATech_Demo_4GameModeBase::Countdown, 1.0f, true, 0.0f);

	if (CountdownTimerHUDOverlayAsset)
	{
		CountdownTimerHUDOverlay = CreateWidget<UUserWidget>(GetWorld(), CountdownTimerHUDOverlayAsset);
	}

	if (CountdownTimerHUDOverlay != nullptr)
	{
		CountdownTimerHUDOverlay->AddToViewport();
		CountdownTimerHUDOverlay->SetVisibility(ESlateVisibility::Visible);
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
		
		}
	}
}
