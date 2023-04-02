// Fill out your copyright notice in the Description page of Project Settings.


#include "TeddyBearActor.h"
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetStringLibrary.h>

// Sets default values
ATeddyBearActor::ATeddyBearActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ATeddyBearActor::BeginPlay()
{
	Super::BeginPlay();
	
	FVector BoxExtent;
	FVector Origin;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;

	// get mesh 
	TArray<UStaticMeshComponent*> MeshComponents;
	GetComponents<UStaticMeshComponent>(MeshComponents);

	if (MeshComponents.Num() > 0)
	{
		UStaticMeshComponent* StaticMesh = MeshComponents[0];
		StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ATeddyBearActor::OnOverlapBegin);
	}
}

void ATeddyBearActor::AddTeddyBearPointsToHud()
{
	UE_LOG(LogTemp, Warning, TEXT("TeddyBearActor::AddTeddyBearPointsToHud"));
	// get ref tu HUD
	//AGameHud Hud = UGameplayStatics::GetPlayerController(this, 0)->GetHUD();
	/*if (Hud != nullptr)
	{
		Hud->AddPoints(TeddyBearPoints)
	}*/
}

float ATeddyBearActor::GetHalfCollisionWidth()
{
	return HalfCollisionWidth;
}

void ATeddyBearActor::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("TeddyBearActor::OnOverlapBegin"));
	// Handle the overlap event here
	// check for projectile
	if (OtherActor != nullptr && OtherActor->ActorHasTag("Projectile"))
	{
		ProcessProjectileCollision();
		OtherActor->Destroy(true, true);
	}
}

void ATeddyBearActor::SetTeddyBearPoints(int Points)
{
	TeddyBearPoints = Points;
}

// Called every frame
void ATeddyBearActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move left
	FVector NewLocation = GetActorLocation();
	NewLocation.Y -= MoveAmountPerSecond * DeltaTime;
	SetActorLocation(NewLocation);

	// out of bounds
	if (GetActorLocation().Y < -256 - HalfCollisionWidth) // 256 is half the screen width, to const
	{
		Destroy(true);
		UE_LOG(LogTemp, Warning, TEXT("TeddyBearActor::Tick::Destroy"));
	}
}

