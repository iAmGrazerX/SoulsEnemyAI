// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CombatIntent.generated.h"

UENUM(BlueprintType)
enum class ECombatIntent : uint8
{
	CloseRangeAttack UMETA(DisplayName="Light Attack"),
	HeavyAttack UMETA(DisplayName="Heavy Attack"),
	GapCloser UMETA(DisplayName="Gap Closer"),
	Punish UMETA(DisplayName="Punish"),
	Retreat UMETA(DisplayName="Retreat")
};
