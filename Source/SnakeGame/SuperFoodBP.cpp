// Fill out your copyright notice in the Description page of Project Settings.


#include "SuperFoodBP.h"
#include "SnakeBase.h"
#include "Engine/Classes/Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"

// Sets default values
ASuperFoodBP::ASuperFoodBP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
}

// Called when the game starts or when spawned
void ASuperFoodBP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASuperFoodBP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	BuferTimeSF += DeltaTime; // подсчет количества пройденного времени

	if (BuferTimeSF > StepDelaySF)
	{
		Destroy(true, true);
	}
}

// Called every frame

void ASuperFoodBP::Interact(AActor* Interactor, bool bIsHead)
{
	if (bIsHead)
	{
		auto Snake = Cast<ASnakeBase>(Interactor);
		if (IsValid(Snake))
		{			
			Snake-> SetActorTickInterval(GetActorTickInterval() * 2);
			ASuperFoodBP::Destroy();
		}
	}
}
