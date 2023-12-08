// Copyright Epic Games, Inc. All Rights Reserved.


#include "Tech_Demo_4GameModeBase.h"
#include "EngineUtils.h"

void ATech_Demo_4GameModeBase::StartPlay()
{
	Super::StartPlay();

	for(TActorIterator<ACharacterController> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		AActor* FoundActor = *ActorIterator;

		if (FoundActor->ActorHasTag(TEXT("Player")))
		{
			Players.Emplace(Cast<ACharacterController>(FoundActor));
		}
	}

	for (int32 Index = 0; Index != Players.Num(); ++Index)
	{
		Players[Index]->FindComponentByClass<USkeletalMeshComponent>()->SetMaterial(1, Materials[Index]);
	}
	
}
