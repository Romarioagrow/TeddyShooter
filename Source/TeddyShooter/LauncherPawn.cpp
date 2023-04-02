// Fill out your copyright notice in the Description page of Project Settings.


#include "LauncherPawn.h"
#include "LauncherProjectile.h"

// Sets default values
ALauncherPawn::ALauncherPawn()
{
 	// Set this pawn to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALauncherPawn::BeginPlay()
{
	Super::BeginPlay();

	MovementSpeed = 100.0f;
	SetActorLocation(FVector(0.0f, -240.0f, 0.0f));
}

void ALauncherPawn::MoveRight(float AxisValue)
{
	FVector ActorLocation = GetActorLocation();
	float NextZ = AxisValue * MovementSpeed * GetWorld()->GetDeltaSeconds();
	float NewZ = ActorLocation.Z + NextZ;

	if (NewZ + NextZ > -130 && NewZ + NextZ < 130)

	{
		AddActorLocalOffset(FVector(0.0f, 0.0f, NextZ));
	}
}

void ALauncherPawn::Fire()
{
	UE_LOG(LogTemp, Warning, TEXT("Fire!"));

	FVector SpawnLocation = GetActorLocation() + FVector(0.0f, 25.0f, 0.0f);
	FRotator SpawnRotation = GetActorRotation();
	GetWorld()->SpawnActor<ALauncherProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
}

// Called every frame
void ALauncherPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ALauncherPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveRight", this, &ALauncherPawn::MoveRight);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ALauncherPawn::Fire);
}

