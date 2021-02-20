// Fill out your copyright notice in the Description page of Project Settings.


#include "PodScripting.h"
#include <iostream>
#include <chrono>

using namespace std;

// m/s^2
float _default_accel = 30.0;

// m/s^2
float _gravity = 9.81;

// kg
float _mass = 2000;

// 0.6 - 0.15 for steel
float _static_friction_coeff = 0.4;

// 0.09 - 0.6
float _kinetic_friction_coeff = 0.2;

// m/s
float _speed = 0;
float _power;
float _tilt;
float _force;

// Sets default values for this component's properties
UPodScripting::UPodScripting()
{
    PrimaryComponentTick.bCanEverTick = true;
    _speed = 0;
}

// Speed is in cm/seconds
float UPodScripting::CalculateSpeed(float speed)
{
    float new_acceleration = _default_accel;
    
    new_acceleration -= _speed == 0 ? GetAccelerationFromForce(CalculateFrictionForce(true)) : GetAccelerationFromForce(CalculateFrictionForce(false));
    //new_acceleration -= GetAccelerationFromForce(CalculateAirResistance(_speed));
    
    _speed = GetNewVelocity(new_acceleration);
    
    return ConvertToCmS(_speed);
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

float UPodScripting::GetNewVelocity(float acceleration)
{
    float time = 0.1;
    return _speed + acceleration * time;
}

float UPodScripting::CalculateFrictionForce(bool stationary)
{
    return stationary ? _static_friction_coeff * _mass * _gravity : _kinetic_friction_coeff * _mass * _gravity;
}

float UPodScripting::CalculateAirResistance(float speed)
{
    //TODO: Calculate properly
    return speed * 100.0;
}

float UPodScripting::ConvertToCmS(float speed)
{
    return speed * 100.0;
}

float UPodScripting::GetAccelerationFromForce(float force)
{
    return force / _mass;
}


