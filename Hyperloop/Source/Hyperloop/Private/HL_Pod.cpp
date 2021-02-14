// Fill out your copyright notice in the Description page of Project Settings.


#include "HL_Pod.h"

// Sets default values
AHL_Pod::AHL_Pod()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    Pod = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pod"));
    RootComponent = Pod;
    
}

// Called when the game starts or when spawned
void AHL_Pod::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHL_Pod::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHL_Pod::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

