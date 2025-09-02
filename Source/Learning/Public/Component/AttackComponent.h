// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackComponent.generated.h"

class UBaseCharacterData;
//class ACharacter;
class IAttackInterface;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEARNING_API UAttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttackComponent();
	void RequestAttack();	
	void SetupAttackComponent(UBaseCharacterData* BCD);
	void AN_EndAttack();
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	void Attack();

private:
	UPROPERTY()
	UBaseCharacterData* BaseCharacterData;
		
	//Get Actor which has interface instead of using GetOwner()
	UPROPERTY()
	TScriptInterface<IAttackInterface> AttackInterface;

	/*UPROPERTY()
	ACharacter* Character;*/

	bool bIsAttacking = false;	
};
