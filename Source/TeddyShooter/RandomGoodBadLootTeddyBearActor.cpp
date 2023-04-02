#include "RandomGoodBadLootTeddyBearActor.h"

ARandomGoodBadLootTeddyBearActor::ARandomGoodBadLootTeddyBearActor() : ALootTeddyBearActor()
{
	SetTeddyBearPoints(100);
}

void ARandomGoodBadLootTeddyBearActor::BeginPlay()
{
	Super::BeginPlay();

}

void ARandomGoodBadLootTeddyBearActor::ProcessProjectileCollision()
{
	float LootChance = FMath::RandRange(0.0f, 1.0f);
	if (LootChance > 0.5f)
	{
		DropLoot(GetActorLocation(), UGoodLoot);
	}
	else
	{
		DropLoot(GetActorLocation(), UBadLoot);
	}
	Destroy();
}

void ARandomGoodBadLootTeddyBearActor::Tick(float DeltaTime)
{
	ATeddyBearActor::Tick(DeltaTime);
}
