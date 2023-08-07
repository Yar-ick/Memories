// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIControllerWithRotation.generated.h"

/**
 * 
 */
UCLASS()
class MEMORIES_API AAIControllerWithRotation : public AAIController {
	GENERATED_BODY()
	
public:
	void GetActorEyesViewPoint(FVector& outLocation, FRotator& outRotation) const override;
	UFUNCTION(BlueprintImplementableEvent, Category = "AICWithRotation")
	void DetermineAIPerceptionViewPoint(FVector& outLocation, FRotator& outRotation) const;
};
