// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CombatIntent.generated.h"

UENUM(BlueprintType)
enum class ECombatIntent : uint8
{
	PrimaryAttack UMETA(DisplayName="Primary Attack"),
	SecondaryAttack UMETA(DisplayName="Secondary Attack"),
	SpecialAttack UMETA(DisplayName="Special Attack"),
};
