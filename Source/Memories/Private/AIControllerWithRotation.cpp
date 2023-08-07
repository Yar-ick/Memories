// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerWithRotation.h"

void AAIControllerWithRotation::GetActorEyesViewPoint(FVector& outLocation, FRotator& outRotation) const {
	DetermineAIPerceptionViewPoint(outLocation, outRotation);
}