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
};