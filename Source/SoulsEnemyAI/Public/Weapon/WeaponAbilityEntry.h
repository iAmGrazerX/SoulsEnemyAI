#pragma once

#include "AI/CombatIntent.h"
#include "Abilities/GameplayAbility.h"

#include "WeaponAbilityEntry.generated.h"

USTRUCT(BlueprintType)
struct FWeaponAbilityEntry
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ECombatIntent CombatIntent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UGameplayAbility> AbilityClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float Weight = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float PreferredRange = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ToleranceRange = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float StaminaCost = 0.f;
};