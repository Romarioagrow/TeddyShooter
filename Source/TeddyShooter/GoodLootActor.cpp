// Fill out your copyright notice in the Description page of Project Settings.


#include "GoodLootActor.h"

void AGoodLootActor::BeginPlay()
{
	Super::BeginPlay();
}

void AGoodLootActor::ProcessTeddyBearCollision()
{
	AddLootDestroyPointsToHud();
	Destroy();
}
