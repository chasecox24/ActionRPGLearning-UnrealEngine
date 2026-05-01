// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "ActionRPGLearning/DebugMacros.h"


AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay(); //calling the parent class's BeginPlay// the parent version might have functionality that we want to keep, so we call it first before adding our own functionality
	
	SetActorLocation(FVector(0.f, 0.f, 50.f));

	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();

	DRAW_DEBUG_SPHERE(Location);
	//DRAW_DEBUG_LINE(Location, Location + Forward * 100.f);
	//DRAW_DEBUG_POINT(Location + Forward * 100.f);
	DRAW_DEBUG_VECTOR(Location, Location + Forward * 100.f);
	
	/*UE_LOG(LogTemp, Warning, TEXT("Begin play called!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("ON SCREEN MESSAGE!!!"));
	}
	*/
}


void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



	/* UE_LOG(LogTemp, Warning, TEXT("Delta Time: %f"), DeltaTime);

	if (GEngine)
	{
		FString Name = GetName();
		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);
		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name);
	}
	*/
}