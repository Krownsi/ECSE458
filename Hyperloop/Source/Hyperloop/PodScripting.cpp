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

float UPodScripting::CalculateSpeed(float speed)
{
    return speed/5;
}

float UPodScripting::CalculatePower(float power)
{
    return power;
}

float UPodScripting::CalculateTilt(float tilt)
{
    return tilt;
}

float UPodScripting::CalculateForce(float force)
{
    return force;
}
