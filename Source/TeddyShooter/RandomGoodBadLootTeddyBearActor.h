#pragma once

#include "CoreMinimal.h"
#include "LootTeddyBearActor.h"
#include "RandomGoodBadLootTeddyBearActor.generated.h"

/**
 * 
 */
UCLASS()
class TEDDYSHOOTER_API ARandomGoodBadLootTeddyBearActor : public ALootTeddyBearActor
{
	GENERATED_BODY()

public:
	ARandomGoodBadLootTeddyBearActor();

protected:
	virtual void BeginPlay() override;

	virtual void ProcessProjectileCollision() override;

	virtual void Tick(float DeltaTime) override;
};
