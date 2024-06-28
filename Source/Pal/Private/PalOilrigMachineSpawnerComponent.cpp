#include "PalOilrigMachineSpawnerComponent.h"

UPalOilrigMachineSpawnerComponent::UPalOilrigMachineSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnDistanceFromPlayer = 0.00f;
    this->DespawnDistanceFromPlayer = 0.00f;
    this->IsSpawned = false;
    this->MachineStartTimer = 0.00f;
    this->IsMachineStartCountUp = false;
    this->IsMachineDestroyed = false;
}


void UPalOilrigMachineSpawnerComponent::OnDeadMachine() {
}



