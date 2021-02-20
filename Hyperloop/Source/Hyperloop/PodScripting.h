
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PodScripting.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HYPERLOOP_API UPodScripting : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UPodScripting();
    
    UFUNCTION(BlueprintCallable)
    float CalculateSpeed();
    
    UFUNCTION(BlueprintCallable)
    float CalculateBrake();

    UFUNCTION(BlueprintCallable)
    float CalculatePower();

    UFUNCTION(BlueprintCallable)
    float CalculateTilt();

    UFUNCTION(BlueprintCallable)
    float CalculateForce();
    
private:
    float CalculateFrictionForce(bool stationary);
    float CalculateAirResistance(float speed);
    float GetNewVelocity(float acceleration);
    float ConvertToCmS(float speed);
    float GetAccelerationFromForce(float force);
};
