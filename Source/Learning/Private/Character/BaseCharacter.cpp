// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseCharacter.h"
#include <GameFramework/SpringArmComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <Camera/CameraComponent.h>
#include <EnhancedInputSubsystems.h>
#include <EnhancedInputComponent.h>
#include "DataAsset/EnhancedInputData.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	//Spring arm
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;
	SpringArmComponent->TargetArmLength = 400.f;
	SpringArmComponent->AddLocalOffset(FVector(0.f, 0.f, 40.f));

	// Follow camera
	// UCameraComponent
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent);
	CameraComponent->bUsePawnControlRotation = false;

	//
	bUseControllerRotationYaw = false;

	//Character movement component
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate.Yaw = 540.f;
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Add Mapping Context
	AddMappingContextForCharacter();

	//Bind input actions
	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);

	if (EnhancedInputData == nullptr) return;
	EnhancedInputComponent->BindAction(EnhancedInputData->IA_Look, ETriggerEvent::Triggered, this, &ABaseCharacter::Look);
	EnhancedInputComponent->BindAction(EnhancedInputData->IA_Move, ETriggerEvent::Triggered, this, &ABaseCharacter::Move);

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ABaseCharacter::AddMappingContextForCharacter()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if (PlayerController == nullptr) return;
	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

	if (EnhancedInputData && Subsystem)
		Subsystem->AddMappingContext(EnhancedInputData->InputMappingContext, 0);
}



void ABaseCharacter::Look(const FInputActionValue& value)
{
	//get value -> X, Y
	const FVector2D LookValue = value.Get<FVector2D>();
	if (LookValue.X != 0.0)
		AddControllerYawInput(LookValue.X);
	if (LookValue.Y != 0.0)
		AddControllerPitchInput(LookValue.Y);
}

void ABaseCharacter::Move(const FInputActionValue& value)
{
	const FVector2D ActionValue = value.Get<FVector2D>();
	
	const FRotator MyControllerRotation = FRotator(0.0, GetControlRotation().Yaw, 0.0);

	//Forward + backward
	const FVector ForwardDirecton = MyControllerRotation.RotateVector(FVector::ForwardVector);

	//Direction + value
	if (ActionValue.Y != 0.0)
	AddMovementInput(ForwardDirecton, ActionValue.Y);

	//Right + left
	const FVector RightDirecton = MyControllerRotation.RotateVector(FVector::RightVector);

	if (ActionValue.X != 0.0)
	AddMovementInput(RightDirecton, ActionValue.X);
}
