// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GoodLootActor.h"
#include "BadLootActor.h"
#include "LootActor.h"
#include "CoreMinimal.h"
#include "TeddyBearActor.h"
#include "LootTeddyBearActor.generated.h"

/**
 * 
 */
UCLASS()
class TEDDYSHOOTER_API ALootTeddyBearActor : public ATeddyBearActor
{
	GENERATED_BODY()

public:
	ALootTeddyBearActor();

	UPROPERTY(EditAnywhere, meta = (MetaClass = "Loot"), Category = LootBlueprints)
	TSubclassOf<AGoodLootActor> UGoodLoot;
	
	UPROPERTY(EditAnywhere, meta = (MetaClass = "Loot"), Category = LootBlueprints)
	TSubclassOf<ABadLootActor> UBadLoot;

private:
	const float LootDropOffset { 20.0f };

protected: 
	virtual void BeginPlay() override;	

	void DropLoot(FVector Location, TSubclassOf<ALootActor> Loot);
};
