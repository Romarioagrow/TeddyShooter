// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LauncherProjectile.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "LauncherPawn.generated.h"

UCLASS()
class TEDDYSHOOTER_API ALauncherPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ALauncherPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed;// = 100.0f;

	void MoveRight(float AxisValue);

	UFUNCTION()
	void Fire();

	UPROPERTY(EditDefaultsOnly, Category = "Shooting")
	TSubclassOf<class ALauncherProjectile> ProjectileClass;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
