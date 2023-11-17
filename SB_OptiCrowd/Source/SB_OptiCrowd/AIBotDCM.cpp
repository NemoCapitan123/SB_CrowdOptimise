// Fill out your copyright notice in the Description page of Project Settings.

#include "SkeletalMeshComponentBudgeted.h"
#include "AIBotDCM.h"

// Sets default values
AAIBotDCM::AAIBotDCM(const class FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponentBudgeted>(AAIBotDCM::MeshComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAIBotDCM::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIBotDCM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIBotDCM::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

