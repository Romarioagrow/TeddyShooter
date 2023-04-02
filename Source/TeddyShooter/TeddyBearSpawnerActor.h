// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearSpawnerActor.generated.h"

UCLASS()
class TEDDYSHOOTER_API ATeddyBearSpawnerActor : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	ATeddyBearSpawnerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//float TimerTime;

	void SpawnTeddyBear();

	void SpawnTimer();

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class ANoLootTeddyBearActor> NoLootTeddyBearActor;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class ARandomGoodBadLootTeddyBearActor> RandomGoodBadLootTeddyBearActor;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class ARandomGoodLootTeddyBearActor> RandomGoodLootTeddyBearActor;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
