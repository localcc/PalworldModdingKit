#include "PalWindController.h"


void APalWindController::OnActorSpawned(AActor* InActor) {
}

APalWindController::APalWindController() {
    this->WindDirectionResponse = 2.50f;
    this->LastChangedDirectionTime = -1.00f;
    this->LastChangedSpeedTime = -1.00f;
}

