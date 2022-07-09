// Fill out your copyright notice in the Description page of Project Settings.


#include "LOLCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SInteractionComponent.h"


// Sets default values
ALOLCharacter::ALOLCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);

	InteractionComp = CreateDefaultSubobject<USInteractionComponent>("InteractionComp");

	GetCharacterMovement()->bOrientRotationToMovement = true;

	bUseControllerRotationYaw = false;


}

// Called when the game starts or when spawned
void ALOLCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALOLCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALOLCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 移动前后
	PlayerInputComponent->BindAxis("MoveForward",this,&ALOLCharacter::MoveForward);

	// 移动左右
	PlayerInputComponent->BindAxis("MoveRight", this, &ALOLCharacter::MoveRight);

	// 镜头左右
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);

	// 镜头上下
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	// 跳跃
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ALOLCharacter::JumpStart);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ALOLCharacter::JumpEnd);

	// 普通公鸡
	PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &ALOLCharacter::PrimaryAttack);

	// 打开宝箱交互
	PlayerInputComponent->BindAction("PrimaryInteract", IE_Pressed, this, &ALOLCharacter::PrimaryInteract);

}




void ALOLCharacter::MoveForward(float value)
{
	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;
	AddMovementInput(ControlRot.Vector(), value);
}

void ALOLCharacter::MoveRight(float value)
{

	FRotator ControlRot = GetControlRotation();
	ControlRot.Pitch = 0.0f;
	ControlRot.Roll = 0.0f;

	// X = forward (red)
	// Y = right (green)
	// Z = up (blue)

	FVector RightVector = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);

	AddMovementInput(RightVector, value);
}

void ALOLCharacter::JumpStart(){
	bPressedJump = true;
}

void ALOLCharacter::JumpEnd() {
	bPressedJump = false;
}

void ALOLCharacter::PrimaryAttack() {

	PlayAnimMontage(AttackAnim);

	GetWorldTimerManager().SetTimer(TimerHandle_PrimaryAttack, this, &ALOLCharacter::PrimaryAttack_TimeElapsed,0.2f);

	//GetWorldTimerManager().ClearTimer(TimerHandle_PrimaryAttack);

}

void ALOLCharacter::PrimaryAttack_TimeElapsed()
{
	FVector HandLocation = GetMesh()->GetSocketLocation("Muzzle_01");

	FTransform SpawnTM = FTransform(GetControlRotation(), HandLocation);

	FActorSpawnParameters SpawnParams;

	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


	GetWorld()->SpawnActor<AActor>(ProjectileClass, SpawnTM, SpawnParams);

}

void ALOLCharacter::PrimaryInteract()
{
	if (InteractionComp) InteractionComp->PrimaryInteract();
}
