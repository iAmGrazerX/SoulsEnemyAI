// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatProfile.generated.h"

USTRUCT(BlueprintType)
struct FCombatProfile
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinCombatRange = 150.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IdealCombatRange = 250.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCombatRange = 400.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RecoveryDuration = 2.0f;
};