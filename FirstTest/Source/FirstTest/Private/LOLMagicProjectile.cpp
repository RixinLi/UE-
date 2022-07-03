// Fill out your copyright notice in the Description page of Project Settings.


#include "LOLMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFrameWork/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"


// Sets default values
ALOLMagicProjectile::ALOLMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 初始化

	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	SphereComp->SetCollisionObjectType(ECC_WorldDynamic);
	
	// 手动设置碰撞配置
	/*
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);*/
	
	// 所有碰撞设置已经在 project setting 里的碰撞设置方案中
	SphereComp->SetCollisionProfileName("Projectile");
	RootComponent = SphereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
	EffectComp->SetupAttachment(SphereComp);

	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	MovementComp->InitialSpeed = 1000.0f;
	MovementComp->bRotationFollowsVelocity = true;
	MovementComp->bInitialVelocityInLocalSpace = true;
}

// Called when the game starts or when spawned
void ALOLMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALOLMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

