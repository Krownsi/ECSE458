// Fill out your copyright notice in the Description page of Project Settings.


#include "PodScripting.h"
#include <iostream>

using namespace std;

// Sets default values for this component's properties
UPodScripting::UPodScripting()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPodScripting::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UPodScripting::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    float distanceToPlayerX = 2.22;
    float distancetoPlayerY = 22.22;
    UE_LOG(LogClass, Log, TEXT("Distance x: %f, y: %f"), distanceToPlayerX, distancetoPlayerY);
	// ...
}

