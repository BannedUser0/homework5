// Fill out your copyright notice in the Description page of Project Settings.


#include "homeworkActor.h"
// Sets default values
AhomeworkActor::AhomeworkActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AhomeworkActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Homework Actor has been spawned!"));
	  // Call the move function to log numbers
    // Replace the problematic line with the following corrected line:
	move();
}

void AhomeworkActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

