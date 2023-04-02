// Fill out your copyright notice in the Description page of Project Settings.


#include "LootActor.h"

// Sets default values
ALootActor::ALootActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LootDestroyPoints = 100;
	UE_LOG(LogTemp, Warning, TEXT("LootActor::LootActor"));
}

void ALootActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor != nullptr && OtherActor->ActorHasTag("Projectile"))
	{
		AddLootDestroyPointsToHud();
		OtherActor->Destroy();
		Destroy();
	}
	else if (OtherActor != nullptr && OtherActor->ActorHasTag("TedddyBear"))
	{
		ProcessTeddyBearCollision();
	}
}

// Called when the game starts or when spawned
void ALootActor::BeginPlay()
{
	Super::BeginPlay();

	TArray<UStaticMeshComponent*> MeshComponents;
	GetComponents<UStaticMeshComponent>(MeshComponents);

	if (MeshComponents.Num() > 0)
	{
		UStaticMeshComponent* StaticMesh = MeshComponents[0];
		StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ALootActor::OnOverlapBegin);
	}
}

void ALootActor::AddLootDestroyPointsToHud()
{

}

void ALootActor::AddPointsToHud()
{

}

void ALootActor::SetLootDestroyPoints(int Points)
{
	LootDestroyPoints = Points;
}

// Called every frame
void ALootActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

