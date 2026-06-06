// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Weapon/WeaponType.h"
#include "AI/Struct/CombatProfile.h"
#include "WeaponDefinition.generated.h"

/**
 * 
 */
UCLASS()
class SOULSENEMYAI_API UWeaponDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EWeaponType WeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FCombatProfile CombatProfile;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TSubclassOf<class UGameplayAbility>> AbilitySet;
};
