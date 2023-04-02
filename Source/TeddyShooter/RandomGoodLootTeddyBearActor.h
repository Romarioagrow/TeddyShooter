#pragma once

#include "CoreMinimal.h"
#include "LootTeddyBearActor.h"
#include "RandomGoodLootTeddyBearActor.generated.h"

/**
 * 
 */
UCLASS()
class TEDDYSHOOTER_API ARandomGoodLootTeddyBearActor : public ALootTeddyBearActor
{
	GENERATED_BODY()

public:
	ARandomGoodLootTeddyBearActor();

protected:
	virtual void BeginPlay() override;

	virtual void ProcessProjectileCollision() override;	

	virtual void Tick(float DeltaTime) override;
};
