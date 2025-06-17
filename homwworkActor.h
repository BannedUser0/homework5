// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "homeworkActor.generated.h"

UCLASS()
class HOMEWORK4_API AhomeworkActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AhomeworkActor();

protected:
	void move()
	{
		int XPos=0;
		int YPos=0;
		int moveCount = 0;
		for (int i = 0; i < 10; i++) {
			XPos = step();
			YPos = step();
			moveCount = moveCount + XPos + YPos;
			UE_LOG(LogTemp, Warning, TEXT("Position x : %d, y : %d"), XPos, YPos);
			UE_LOG(LogTemp, Warning, TEXT("Total move : %d"), moveCount);
		}
		UE_LOG(LogTemp, Warning, TEXT("finish"));
	};
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	int32 step() {  
		int32 RandomNumber = FMath::RandRange(0, 1);  
		return RandomNumber;  
	}

};
