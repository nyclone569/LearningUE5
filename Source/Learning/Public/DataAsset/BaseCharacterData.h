// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BaseCharacterData.generated.h"

class UAnimMontage;

UCLASS()
class LEARNING_API UBaseCharacterData : public UDataAsset
{
	GENERATED_BODY()
	
public:
	// Animation montage
	UPROPERTY(EditDefaultsOnly, Category = "Attack")
	UAnimMontage* AttackMontage;
};
