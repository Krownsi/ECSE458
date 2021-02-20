// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "HL_Pod.generated.h"

UCLASS()
class HYPERLOOP_API AHL_Pod : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AHL_Pod();
    
    UFUNCTION(BlueprintCallable)
    int32 SimpleExposedFunction(int32 speed);

protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;
    
    // Static mesh is visible everywhere
    //UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Setup");
    
    // Garbage collectiona auto setup
    //UStaticMeshComponent* Pod;
    
    
};
