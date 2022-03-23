// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GAS.h"
#include "MyGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class GAS_API UMyGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UMyGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EMyAbilityInputID AbilityInputID = EMyAbilityInputID::None;;

};
