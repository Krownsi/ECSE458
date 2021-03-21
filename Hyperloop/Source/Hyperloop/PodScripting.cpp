// Fill out your copyright notice in the Description page of Project Settings.


#include "PodScripting.h"
#include <iostream>
#include <chrono>

using namespace std;

// m/s^2
float _default_accel = 200.0;

// m/s^2
float _gravity = 9.81;

// kg
float _mass = 2000;

// 0.6 - 0.15 for steel
float _static_friction_coeff = 0.4;

// 0.09 - 0.6
float _kinetic_friction_coeff = 0.2;

// m/s
float _speed;
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
float UPodScripting::CalculateSpeed()
{
    float new_acceleration = _default_accel;
    
    float prevSpeed = _speed;
    
//    new_acceleration -= _speed == 0 ? GetAccelerationFromForce(CalculateFrictionForce(true)) : GetAccelerationFromForce(CalculateFrictionForce(false));
    //new_acceleration -= GetAccelerationFromForce(CalculateAirResistance(_speed));
    
    _speed = GetNewVelocity(new_acceleration);
    
    return ConvertToCmS(_speed - prevSpeed);
}

float UPodScripting::CalculateBrake()
{
    
    float prevSpeed = _speed;
    
    _speed -= 10.0;
    
    if(_speed < 0) {
        _speed = 0;
    }
        
    return ConvertToCmS(_speed - prevSpeed);
}

float UPodScripting::CalculatePower()
{
    return _power;
}

float UPodScripting::CalculateTilt()
{
    return _tilt;
}

float UPodScripting::CalculateForce()
{
    return _force;
}

/** HELPERS ***/

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

// braking decelleration function
// power from thrusters
// power from braking
// thermodynamics of batteries
// cooling mechanism
// battery efficiency vs. thermal
// angle of camera when acceleration + deaccelerating
// g-force in pod
// crashing conditions: too fast, overheating, g-force

