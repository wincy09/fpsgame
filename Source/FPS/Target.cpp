// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"

// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
float ATarget::CalculateScore(float delta,float Score)
{
	Score += delta;
	return Score;
}
#if WITH_EDITOR
void ATarget::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	//Score = 0;

	Super::PostEditChangeProperty(PropertyChangedEvent);
	//因为分数变化而带来的影响

}

#endif

