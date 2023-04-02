#include "NoLootTeddyBearActor.h"

ANoLootTeddyBearActor::ANoLootTeddyBearActor() : ATeddyBearActor()
{
	SetTeddyBearPoints(50);
}

void ANoLootTeddyBearActor::ProcessProjectileCollision()
{
	AddTeddyBearPointsToHud();	
	Destroy();
}

void ANoLootTeddyBearActor::BeginPlay() 
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("NoLootTeddyBearActor::BeginPlay"));
}

void ANoLootTeddyBearActor::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);
}
