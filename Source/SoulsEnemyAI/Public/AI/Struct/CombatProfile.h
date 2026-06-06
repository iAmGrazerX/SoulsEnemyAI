// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatProfile.generated.h"

USTRUCT(BlueprintType)
struct FCombatProfile
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float MinCombatRange = 150.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float IdealCombatRange = 250.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	float MaxCombatRange = 400.f;
};