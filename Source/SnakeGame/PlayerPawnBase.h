// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawnBase.generated.h"

class UCameraComponent;
class ASnakeBase;
class AFood;
class ASuperFoodBP;

UCLASS()
class SNAKEGAME_API APlayerPawnBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawnBase();

	UPROPERTY(BlueprintReadWrite)
	UCameraComponent* PawnCamera;

	UPROPERTY(BlueprintReadWrite)
	ASnakeBase* SnakeActor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnakeBase> SnakeActorClass; // создали переменную класса змейки

	UPROPERTY(BlueprintReadWrite)
	AFood* FoodActor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AFood> FoodActorClass;

	UPROPERTY(BlueprintReadWrite)
	ASuperFoodBP* SuperFoodBPActor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASuperFoodBP> SuperFoodBPActorClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CreateSnakeActor();

	void CreateFoodActor();

	void CreateSuperFoodBPActor();

	UFUNCTION()
		void HandlePlayerVerticalInput(float value);
	UFUNCTION()
		void HandlePlayerHorizontalInput(float value);

	// Диапазон создания еды
	float MinY = -1420.f; float MaxY = 1420.f;
	float MinX = -420.f; float MaxX = 1420.f;
	float SpawnZ = 60.f;

	void AddRandomFood();

	float StepDelay = 1.0f; // задержка при движении
	float BuferTime = 0; // накопитель времени

	void AddRandomSuperFoodBP();

	float StepDelaySF = 5.0f; // задержка при движении
	float BuferTimeSF = 0; // накопитель времени

	//int GameMode = 0; // переменная режима игры
	//UFUNCTION(BlueprintCallable, Category = "SnakePawn")
	//int GetGameMode() const
	//{
	//	return GameMode;
	//}

	//UFUNCTION(BlueprintCallable, Category = "SnakePawn")
		//int GetScore();
};
