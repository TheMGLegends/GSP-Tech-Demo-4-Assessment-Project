// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterController.h"
#include "Blueprint/UserWidget.h"
#include "CharacterWidget.generated.h"

UCLASS()
class TECH_DEMO_4_API UCharacterWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Object")
	APawn* CharacterPawn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Controller")
	ACharacterController* CharacterController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeEffect;

	UFUNCTION(BlueprintCallable, Category = "Fade")
	void Fade();

};
