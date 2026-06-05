// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "EnemyAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class SOULSENEMYAI_API UEnemyAttributeSet : public UAttributeSet
{
	GENERATED_BODY()


public:

UPROPERTY(BlueprintReadOnly)
FGameplayAttributeData Health;
ATTRIBUTE_ACCESSORS(UEnemyAttributeSet, Health)

UPROPERTY(BlueprintReadOnly)
FGameplayAttributeData MaxHealth;
ATTRIBUTE_ACCESSORS(UEnemyAttributeSet, MaxHealth)

UPROPERTY(BlueprintReadOnly)
FGameplayAttributeData Stamina;
ATTRIBUTE_ACCESSORS(UEnemyAttributeSet, Stamina)

UPROPERTY(BlueprintReadOnly)
FGameplayAttributeData MaxStamina;
ATTRIBUTE_ACCESSORS(UEnemyAttributeSet, MaxStamina)

UPROPERTY(BlueprintReadOnly)
FGameplayAttributeData Poise;
ATTRIBUTE_ACCESSORS(UEnemyAttributeSet, Poise)

UPROPERTY(BlueprintReadOnly)
FGameplayAttributeData MaxPoise;
ATTRIBUTE_ACCESSORS(UEnemyAttributeSet, MaxPoise)
	
};