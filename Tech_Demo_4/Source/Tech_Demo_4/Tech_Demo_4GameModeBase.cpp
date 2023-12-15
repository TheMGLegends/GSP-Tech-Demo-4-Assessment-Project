// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tech_Demo_4GameModeBase.h"

#include "CharacterWidget.h"
#include "EngineUtils.h"
#include "Blueprint/UserWidget.h"

void ATech_Demo_4GameModeBase::StartPlay()
{
	Super::StartPlay();

	for(TActorIterator<ACharacterController> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		ACharacterController* CharacterController = *ActorIterator;

		if (CharacterController != nullptr && CharacterController->ActorHasTag(TEXT("Player")))
		{
			Players.Emplace(CharacterController);
			
			if (CharacterController->GetController())
			{
				UE_LOG(LogTemp, Warning, TEXT("Found Actor"));
				
				if(HUDOverlayAsset)
				{
					HUDOverlay = CreateWidget<UUserWidget>(Cast<APlayerController>(CharacterController->GetController()), HUDOverlayAsset);
				}

				if (HUDOverlay != nullptr)
				{
					Cast<UCharacterWidget>(HUDOverlay)->CharacterPawn = CharacterController->GetController()->GetPawn();
					Cast<UCharacterWidget>(HUDOverlay)->CharacterController = CharacterController;
					CharacterController->CharacterWidget = Cast<UCharacterWidget>(HUDOverlay);
					HUDOverlay->AddToPlayerScreen();
					HUDOverlay->SetVisibility(ESlateVisibility::Visible);
				}
			}
		}
	}

	for (uint8 Index = 0; Index != Players.Num(); ++Index)
	{
		Players[Index]->FindComponentByClass<USkeletalMeshComponent>()->SetMaterial(1, Materials[Index]);
	}
}
