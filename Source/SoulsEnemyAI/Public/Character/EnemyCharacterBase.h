// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "EnemyCharacterBase.generated.h"

class UAbilitySystemComponent;
class UEnemyAttributeSet;


UCLASS()
class SOULSENEMYAI_API AEnemyCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UEnemyAttributeSet> AttributeSet;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual UAbilitySystemComponent*
	GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintCallable)
	UEnemyAttributeSet* GetAttributeSet() const;
	
	UFUNCTION(BlueprintCallable)
	float GetCurrentStamina() const;
};
