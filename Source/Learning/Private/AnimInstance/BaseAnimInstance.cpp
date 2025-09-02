// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/BaseAnimInstance.h"
#include <GameFramework/Character.h>
#include <GameFramework/CharacterMovementComponent.h>
#include "Kismet/KismetMathLibrary.h"

void UBaseAnimInstance::NativeInitializeAnimation()
{
	// Pawn -> Character
	Character = Cast<ACharacter>(TryGetPawnOwner());

	// check nullptr
	if(Character)
		MovementComponent = Character->GetCharacterMovement();
}

void UBaseAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{	
	//Calculate Speed (No need of z when on ground)
	if(MovementComponent)
		GroundSpeed = UKismetMathLibrary::VSizeXY(MovementComponent->Velocity);
	bShouldMove = GroundSpeed > 0.0f;
}
