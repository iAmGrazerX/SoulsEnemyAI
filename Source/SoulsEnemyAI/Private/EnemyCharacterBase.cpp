// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacterBase.h"
#include "EnemyAttributeSet.h"
#include "AbilitySystemComponent.h"


// Sets default values
AEnemyCharacterBase::AEnemyCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	AbilitySystemComponent =
		CreateDefaultSubobject<UAbilitySystemComponent>(
			TEXT("AbilitySystemComponent"));

	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet =
		CreateDefaultSubobject<UEnemyAttributeSet>(
			TEXT("AttributeSet"));

}

// Called when the game starts or when spawned
void AEnemyCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* AEnemyCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UEnemyAttributeSet* AEnemyCharacterBase::GetAttributeSet() const
{
	return AttributeSet;
}

float AEnemyCharacterBase::GetCurrentStamina() const
{
	if (!AttributeSet)
	{
		return 0.f;
	}
	
	return AttributeSet->GetStamina();
}

