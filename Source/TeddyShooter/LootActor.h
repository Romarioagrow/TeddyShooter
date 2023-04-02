// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LootActor.generated.h"

UCLASS(abstract)
class TEDDYSHOOTER_API ALootActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALootActor();

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor,
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	int LootDestroyPoints;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void AddLootDestroyPointsToHud();

	void AddPointsToHud();

	virtual void ProcessTeddyBearCollision() PURE_VIRTUAL(ALootActor::ProcessTeddyBearCollision,);

	void SetLootDestroyPoints(int Points);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
