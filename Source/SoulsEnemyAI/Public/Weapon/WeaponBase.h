// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponDefinition.h"
#include "AI/CombatIntent.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

class UGameplayAbility;

UCLASS()
class SOULSENEMYAI_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeaponBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UWeaponDefinition> WeaponDefinition;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	TSubclassOf<UGameplayAbility>
	GetAbilityForIntent(ECombatIntent Intent);
};
