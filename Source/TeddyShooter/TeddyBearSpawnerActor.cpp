// Fill out your copyright notice in the Description page of Project Settings.

#include "NoLootTeddyBearActor.h"
#include "RandomGoodLootTeddyBearActor.h"
#include "RandomGoodBadLootTeddyBearActor.h"

#include "TeddyBearSpawnerActor.h"

// Sets default values
ATeddyBearSpawnerActor::ATeddyBearSpawnerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATeddyBearSpawnerActor::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnTeddyBear();
	SpawnTimer();
}

void ATeddyBearSpawnerActor::SpawnTeddyBear()
{
	TSubclassOf<class ATeddyBearActor> TeddyBearToSpawn;
	// get a random launcher
	int RandomChoise = FMath::RandRange(0, 2);
	switch (RandomChoise)
	{
	case 0:
		TeddyBearToSpawn = NoLootTeddyBearActor;
		break;
	case 1:
		TeddyBearToSpawn = RandomGoodBadLootTeddyBearActor;
		break;
	case 2:
		TeddyBearToSpawn = RandomGoodLootTeddyBearActor;
		break;
	default:
		break;
	}
	
	float RandZ = FMath::RandRange(-100.0f, 100.0f);
	FVector SpawnLocation = {0.0f, 230.0f, RandZ };

	// spawn a teddy bear
	GetWorld()->SpawnActor<ATeddyBearActor>(TeddyBearToSpawn, SpawnLocation, GetActorRotation());
}

void ATeddyBearSpawnerActor::SpawnTimer()
{
	// get a random time
	float RandomTime = FMath::RandRange(0.2f, 1.5f);
	FTimerHandle TimerTime;

	// set a timer
	GetWorldTimerManager().SetTimer(TimerTime, this, &ATeddyBearSpawnerActor::SpawnTeddyBear, RandomTime, true);
}

// Called every frame
void ATeddyBearSpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

