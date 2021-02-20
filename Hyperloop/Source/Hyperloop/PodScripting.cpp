// Fill out your copyright notice in the Description page of Project Settings.


#include "PodScripting.h"
#include <iostream>

using namespace std;

float _speed;
float _power;
float _tilt;
float _force;

// Sets default values for this component's properties
UPodScripting::UPodScripting()
{
    PrimaryComponentTick.bCanEverTick = true;
}

float UPodScripting::CalculateSpeed(float speed)
{
    _speed = speed;
    
    return speed/4;
}

float UPodScripting::CalculatePower(float power)
{
    _power = power;
    
    return power;
}

float UPodScripting::CalculateTilt(float tilt)
{
    _tilt = tilt;
    
    return tilt;
}

float UPodScripting::CalculateForce(float force)
{
    _force = force;
    
    return force;
}
