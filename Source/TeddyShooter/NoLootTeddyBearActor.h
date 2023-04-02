// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TeddyBearActor.h"
#include "NoLootTeddyBearActor.generated.h"

/**
 * 
 */
UCLASS()
class TEDDYSHOOTER_API ANoLootTeddyBearActor : public ATeddyBearActor
{
	GENERATED_BODY()

public:
	ANoLootTeddyBearActor();

protected:
	virtual void ProcessProjectileCollision() override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
};
