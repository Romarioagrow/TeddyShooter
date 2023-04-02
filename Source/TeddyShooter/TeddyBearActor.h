// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeddyBearActor.generated.h"

UCLASS(abstract)
class TEDDYSHOOTER_API ATeddyBearActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATeddyBearActor();

private:
	float HalfCollisionWidth{ 22.0f };

	int TeddyBearPoints{ 10 };

	const float MoveAmountPerSecond{ 60 };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void AddTeddyBearPointsToHud();

	float GetHalfCollisionWidth();

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, 
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual void ProcessProjectileCollision() PURE_VIRTUAL(ATeddyBearActor::ProcessProjectileCollision);

	void SetTeddyBearPoints(int Points);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
