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
class GASEDITOR_API UBaseAttributes : public UAttributeSet
{
	GENERATED_BODY()

public:

//
// @GAS_ATTIBUTE_EDITOR

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_MACROS(UBaseAttributes, Health)

UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayAttributeData Mana;
	ATTRIBUTE_MACROS(UBaseAttributes, Mana)

// @GAS_ATTIBUTE_EDITOR
//

};
