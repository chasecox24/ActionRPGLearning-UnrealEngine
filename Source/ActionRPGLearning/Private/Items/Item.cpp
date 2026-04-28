// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay(); //calling the parent class's BeginPlay// the parent version might have functionality that we want to keep, so we call it first before adding our own functionality
	
	UE_LOG(LogTemp, Warning, TEXT("Begin play called!"));

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("ON SCREEN MESSAGE!!!"));
	}
}


void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

