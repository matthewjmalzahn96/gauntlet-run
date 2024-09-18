// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class GAUNTLETRUN_API AMovingPlatform : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Sets default values for this actor's properties
	AMovingPlatform();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, Category = "Moving")
	FVector PlatformVelocity = FVector(0, 100, 0);

	UPROPERTY(EditAnywhere, Category = "Rotating")
	FRotator PlatformRotation = FRotator(0, 0, 0);

	UPROPERTY(EditAnywhere, Category = "Moving")
	float MoveDistance = 100;
	
	UPROPERTY(EditAnywhere, Category = "Moving")
	bool ShouldMove = true;	
	

	FVector StartLocation;


	void MovePlatform(float DeltaTime);

	void RotatePlatform(float DeltaTime);


	bool ShouldPlatformReturn() const;

	float GetDistanceMoved() const;

};
