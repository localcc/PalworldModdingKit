#include "PalWindController.h"

APalWindController::APalWindController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WindDirectionResponse = 2.50f;
    this->LastChangedDirectionTime = -1.00f;
    this->LastChangedSpeedTime = -1.00f;
}


void APalWindController::OnActorSpawned(AActor* InActor) {
}


