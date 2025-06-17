#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "homeworkActor.generated.h"

UCLASS()
class HOMEWORK4_API AhomeworkActor : public AActor
{
	GENERATED_BODY()

public:
	AhomeworkActor();

protected:
	virtual void BeginPlay() override;
	void Move();

public:
	virtual void Tick(float DeltaTime) override;

private:
	int32 Step();
	int32 DiceRolling();
};
