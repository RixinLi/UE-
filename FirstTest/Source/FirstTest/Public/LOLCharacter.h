﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LOLCharacter.generated.h"

//#include "Camera/CameraComponent.h" // 啊这为什么都要我自己来

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class FIRSTTEST_API ALOLCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALOLCharacter();

protected:

	UPROPERTY(VisibleAnywhere);

	USpringArmComponent *SpringArmComp;

	UPROPERTY(VisibleAnywhere);
	UCameraComponent* CameraComp;

	void MoveForward(float value) 
	{
		AddMovementInput(GetActorForwardVector(), value);
	}

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
