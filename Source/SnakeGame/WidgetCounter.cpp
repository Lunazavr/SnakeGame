// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetCounter.h"
#include "Components/Button.h"

bool UWidgetCounter::Initialize()
{
	Super::Initialize();

	StartGame->OnClicked.AddDynamic(this, &UWidgetCounter::StartButtonClicked);

	return true;
}

void UWidgetCounter::StartButtonClicked()
{
	UE_LOG(LogTemp, Warning, TEXT("Start game!"));
}