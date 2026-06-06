// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponType.generated.h" // This must match the filename

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	Greatsword,
	Spear,
	Hammer,
	DualBlade
};