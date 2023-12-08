// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CharacterController.h"
#include "GameFramework/GameModeBase.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Tech_Demo_4GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TECH_DEMO_4_API ATech_Demo_4GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:
	virtual void StartPlay() override;

	UPROPERTY()
	TArray<ACharacterController*> Players;
	
public:
	UPROPERTY(EditAnywhere, Category = "Materials")
	TArray<UMaterialInstanceConstant*> Materials;
};
