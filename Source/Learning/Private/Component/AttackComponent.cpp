// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/AttackComponent.h"
#include <GameFramework/Character.h>
#include "DataAsset/BaseCharacterData.h"
#include "Interface/AttackInterface.h"

// Sets default values for this component's properties
UAttackComponent::UAttackComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}
// Called when the game starts
void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();

	//Character = Cast<ACharacter>(GetOwner());
	//Get Actor which has interface instead of using GetOwner()
	AttackInterface = TScriptInterface<IAttackInterface>(GetOwner());
}

void UAttackComponent::RequestAttack()
{
	if (bIsAttacking)
		return;
	Attack();
}

void UAttackComponent::Attack()
{
	if (AttackInterface && BaseCharacterData)
		AttackInterface->I_PlayAttackMontage(BaseCharacterData->AttackMontage);
	bIsAttacking = true;
}

void UAttackComponent::SetupAttackComponent(UBaseCharacterData* BCD)
{
	BaseCharacterData = BCD;
}

void UAttackComponent::AN_EndAttack()
{
	bIsAttacking = false;
}



