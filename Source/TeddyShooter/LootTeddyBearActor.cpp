// Fill out your copyright notice in the Description page of Project Settings.


#include "LootTeddyBearActor.h"

ALootTeddyBearActor::ALootTeddyBearActor() : ATeddyBearActor()
{}

void ALootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("LootTeddyBearActor::BeginPlay"));
}

void ALootTeddyBearActor::DropLoot(FVector Location, TSubclassOf<ALootActor> Loot)
{
	FVector SpawnLocation = Location;
	SpawnLocation.Y += LootDropOffset;
	ALootActor* SpawnedLoot = GetWorld()->SpawnActor<ALootActor>(Loot, SpawnLocation, FRotator::ZeroRotator);

	if (SpawnedLoot)
	{
		UE_LOG(LogTemp, Warning, TEXT("Loot spawned successfully"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Loot spawn failed"));
	}
}
