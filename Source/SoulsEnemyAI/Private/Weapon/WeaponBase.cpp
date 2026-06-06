// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponBase.h"

#include "Weapon/WeaponAbilityEntry.h"


// Sets default values
AWeaponBase::AWeaponBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

TSubclassOf<UGameplayAbility> AWeaponBase::GetAbilityForIntent(ECombatIntent Intent)
{
	if (!WeaponDefinition)
	{
		return nullptr;
	}

	for (const FWeaponAbilityEntry& Entry : WeaponDefinition->AbilityEntries)
	{
		if (Entry.CombatIntent == Intent)
		{
			return Entry.AbilityClass;
		}
	}

	return nullptr;
}

