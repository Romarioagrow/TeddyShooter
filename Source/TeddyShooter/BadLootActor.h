// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LootActor.h"
#include "BadLootActor.generated.h"

/**
 * 
 */
UCLASS()
class TEDDYSHOOTER_API ABadLootActor : public ALootActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void ProcessTeddyBearCollision() override;
};
