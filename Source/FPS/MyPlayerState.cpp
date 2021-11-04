// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerState.h"

AMyPlayerState::AMyPlayerState()
{

}
void AMyPlayerState::CalculateScore(int32 delta)
{
	Score += delta;
}
#if WITH_EDITOR
void AMyPlayerState::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Score = 0;

	Super::PostEditChangeProperty(PropertyChangedEvent);
	//因为分数变化而带来的影响

}

#endif