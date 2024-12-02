// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributes.generated.h"

#define ATTRIBUTE_MACROS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) \

/**
 * 
 */
UCLASS()
class GASPROJECT_API UBaseAttributes : public UAttributeSet
{
	GENERATED_BODY()

public:

// @GAS_EDITOR_START

UPROPERTY(EditAnywhere, BlueprintReadOnly)
FGameplayAttributeData Health;
ATTRIBUTE_MACROS(UBaseAttributes, Health)

UPROPERTY(EditAnywhere, BlueprintReadOnly)
FGameplayAttributeData HealthMax;
ATTRIBUTE_MACROS(UBaseAttributes, HealthMax)

UPROPERTY(EditAnywhere, BlueprintReadOnly)
FGameplayAttributeData Stamina;
ATTRIBUTE_MACROS(UBaseAttributes, Stamina)

UPROPERTY(EditAnywhere, BlueprintReadOnly)
FGameplayAttributeData StaminaMax;
ATTRIBUTE_MACROS(UBaseAttributes, StaminaMax)

// @GAS_EDITOR_END

};
