#include "homeworkActor.h"
#include "Math/UnrealMathUtility.h" // FMath 사용

AhomeworkActor::AhomeworkActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AhomeworkActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Homework Actor has been spawned!"));
	Move();
}

void AhomeworkActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AhomeworkActor::Move()
{
	int XPos = 0;
	int YPos = 0;
	int pastXPos = 0;
	int pastYPos = 0;
	int eventCount = 0;
	float distance = 0.0f;
	float totalDistanceCount = 0;

	for (int i = 0; i < 10; i++) {
		pastXPos = XPos;
		pastYPos = YPos;
		XPos += Step();
		YPos += Step();

		distance = FMath::Sqrt(FMath::Pow((XPos - pastXPos), 2.0f) + FMath::Pow((YPos - pastYPos), 2.0f));
		totalDistanceCount += distance;
		UE_LOG(LogTemp, Warning, TEXT("Position x : %d, y : %d"), XPos, YPos);

		if (DiceRolling() > 3) {
			UE_LOG(LogTemp, Warning, TEXT("Event occur"));
			eventCount++;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Total Distance : %f"), totalDistanceCount);
	UE_LOG(LogTemp, Warning, TEXT("Total Event : %d"), eventCount);
	UE_LOG(LogTemp, Warning, TEXT("Finish"));
}

int32 AhomeworkActor::Step()
{
	return FMath::RandRange(0, 1);
}

int32 AhomeworkActor::DiceRolling()
{
	return FMath::RandRange(1, 6);
}
