
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
    float CalculateSpeed(float speed);

    UFUNCTION(BlueprintCallable)
    float CalculatePower(float power);

    UFUNCTION(BlueprintCallable)
    float CalculateTilt(float tilt);

    UFUNCTION(BlueprintCallable)
    float CalculateForce(float force);
    
};
