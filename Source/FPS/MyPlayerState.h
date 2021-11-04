// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class FPS_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AMyPlayerState();

	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
		int32 PlayerScore = 0;
*/
	UFUNCTION(BlueprintCallable, Category = "Score")
		virtual void CalculateScore(int32 delta);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

#endif
};
