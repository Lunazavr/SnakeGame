// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetCounter.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API UWidgetCounter : public UUserWidget
{
	GENERATED_BODY()

		virtual bool Initialize();

		UPROPERTY(meta = (BindWidget)) // объ€вл€ю кнопку в C++ классе
		class UButton* StartGame;

		UFUNCTION()
			void StartButtonClicked();
};
