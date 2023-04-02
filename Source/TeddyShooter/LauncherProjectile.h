// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LauncherProjectile.generated.h"

UCLASS()
class TEDDYSHOOTER_API ALauncherProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALauncherProjectile();

	/*UFUNCTION()
	void OnProjectileOverlap(AActor* OverlappedActor, AActor* OtherActor);*/

private:
	FVector ImpulseForce{ 0.0f, 50.0f, 0.0f }; 
	const float ScreenRight{ 240 };
	float HalfCollisionWidth;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
