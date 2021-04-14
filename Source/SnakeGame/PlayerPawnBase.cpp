// Fill out your copyright notice in the Description page of Project Settings.
// Статичная камера, кот смотрит вниз на игровое поле


#include "PlayerPawnBase.h"
#include "Engine/Classes/Camera/CameraComponent.h"
#include "SnakeBase.h"
#include "Components/InputComponent.h"
#include "Food.h"
#include "SuperFoodBP.h"

// Sets default values
APlayerPawnBase::APlayerPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));
	RootComponent = PawnCamera;
}

// Called when the game starts or when spawned
void APlayerPawnBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorRotation(FRotator(-90, 0, 0));
	CreateSnakeActor();
	CreateFoodActor();
	CreateSuperFoodBPActor();
}

// Called every frame
void APlayerPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GetWorld()->SpawnActor<AFood>(FoodActorClass, GetActorTransform());
	GetWorld()->SpawnActor<ASuperFoodBP>(SuperFoodBPActorClass, GetActorTransform());
	BuferTime += (DeltaTime);
	if (BuferTime > StepDelay)
	{
		AddRandomFood();
		AddRandomSuperFoodBP();
		BuferTime = 0;
	}
}

// Called to bind functionality to input
void APlayerPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Vertical", this, &APlayerPawnBase::HandlePlayerVerticalInput);
	PlayerInputComponent->BindAxis("Horizontal", this, &APlayerPawnBase::HandlePlayerHorizontalInput);

}

void APlayerPawnBase::CreateSnakeActor()
{
	SnakeActor = GetWorld()->SpawnActor<ASnakeBase>(SnakeActorClass, FTransform());

}

void APlayerPawnBase::CreateFoodActor()
{
	FoodActor = GetWorld()->SpawnActor<AFood>(FoodActorClass, FTransform());
}

void APlayerPawnBase::CreateSuperFoodBPActor()
{
	SuperFoodBPActor = GetWorld()->SpawnActor<ASuperFoodBP>(SuperFoodBPActorClass, FTransform());
}

void APlayerPawnBase::HandlePlayerVerticalInput(float value)
{
	if (IsValid(SnakeActor))
	{
		if (value > 0 && SnakeActor->LastMoveDirection!=EMovementDirection::DOWN)
		{
			SnakeActor->LastMoveDirection = EMovementDirection::UP;
		}
		else if (value < 0 && SnakeActor->LastMoveDirection != EMovementDirection::UP)
		{
			SnakeActor->LastMoveDirection = EMovementDirection::DOWN;
		}
	}
}

void APlayerPawnBase::HandlePlayerHorizontalInput(float value)
{
	if (IsValid(SnakeActor))
	{
		if (value > 0 && SnakeActor->LastMoveDirection != EMovementDirection::LEFT)
		{
			SnakeActor->LastMoveDirection = EMovementDirection::RIGHT;
		}
		else if (value < 0 && SnakeActor->LastMoveDirection != EMovementDirection::RIGHT)
		{
			SnakeActor->LastMoveDirection = EMovementDirection::LEFT;
		}
	}
}

void APlayerPawnBase::AddRandomFood()
{
	FRotator StartPointRotation = FRotator(0, 0, 0); // угол вращения еды
	float SpawnX = FMath::FRandRange(MinX, MaxX); // случайная точка по Х
	float SpawnY = FMath::FRandRange(MinY, MaxY); // случайная точка по Y

	FVector StartPoint = FVector(SpawnX, SpawnY, SpawnZ);

	if (SnakeActor)
	{
		if (GetWorld())
		{
			GetWorld()->SpawnActor<AFood>(FoodActorClass, FTransform(StartPointRotation, StartPoint));
		}
	}
}

void APlayerPawnBase::AddRandomSuperFoodBP()
{
	FRotator StartPointRotation = FRotator(0, 0, 0); // угол вращения еды
	float SpawnX = FMath::FRandRange(MinX, MaxX); // случайная точка по Х
	float SpawnY = FMath::FRandRange(MinY, MaxY); // случайная точка по Y

	FVector StartPoint = FVector(SpawnX, SpawnY, SpawnZ);

	if (SnakeActor)
	{
		if (GetWorld())
		{
			GetWorld()->SpawnActor<ASuperFoodBP>(SuperFoodBPActorClass, FTransform(StartPointRotation, StartPoint));
		}
	}
}

//int APlayerPawnBase::GetScore()
//{
//	if (IsValid(SnakeActor))
//	{
//		return SnakeActor->score;
//	}
//	return 0;
//}

