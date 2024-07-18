// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "Engine/TimerHandle.h"

#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class DESERTRACER_API AMyGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoseResetTime = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WinResetTime = 3.0f;

	FTimerHandle ResetGameTimer;

	void ResetLevel(bool IsWin);
	void OnResetGameTimerTimeout();
};
