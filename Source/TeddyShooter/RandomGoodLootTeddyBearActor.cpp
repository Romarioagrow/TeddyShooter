#include "RandomGoodLootTeddyBearActor.h"

ARandomGoodLootTeddyBearActor::ARandomGoodLootTeddyBearActor() : ALootTeddyBearActor()
{
	SetTeddyBearPoints(50);
}

void ARandomGoodLootTeddyBearActor::BeginPlay()
{
	ATeddyBearActor::BeginPlay();
}

void ARandomGoodLootTeddyBearActor::ProcessProjectileCollision()
{
	float LootChance = FMath::RandRange(0.0f, 1.0f);
	if (LootChance > 0.5f)
	{
		DropLoot(GetActorLocation(), UGoodLoot);
	}
	Destroy();
}

void ARandomGoodLootTeddyBearActor::Tick(float DeltaTime)
{
	ATeddyBearActor::Tick(DeltaTime);
}
