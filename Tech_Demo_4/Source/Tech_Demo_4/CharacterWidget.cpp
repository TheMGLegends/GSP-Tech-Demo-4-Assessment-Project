// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CharacterWidget.h"

void UCharacterWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Fade();
}

void UCharacterWidget::Fade()
{
	if (FadeEffect != nullptr)
	{
		PlayAnimation(FadeEffect, 0.0f, 1, EUMGSequencePlayMode::Forward, 1.0f);
	}
}
