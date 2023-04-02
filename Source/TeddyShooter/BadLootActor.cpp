// Fill out your copyright notice in the Description page of Project Settings.


#include "BadLootActor.h"

void ABadLootActor::BeginPlay()
{
	Super::BeginPlay();
}

void ABadLootActor::ProcessTeddyBearCollision()
{
	AddLootDestroyPointsToHud();
}
