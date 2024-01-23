#include "PalBuildObjectGenerateEnergy.h"

void APalBuildObjectGenerateEnergy::OnUpdateWorkAssigned_ServerInternal(UPalWorkBase* Work) {
}



void APalBuildObjectGenerateEnergy::BroadcastStartGenerate_Implementation() {
}

void APalBuildObjectGenerateEnergy::BroadcastEndGenerate_Implementation() {
}

APalBuildObjectGenerateEnergy::APalBuildObjectGenerateEnergy() {
    this->GenerateEnergyType = EPalEnergyType::Electric;
    this->GenerateEnergyRateByWorker = 1.00f;
    this->MaxEnergyStorage = 100.00f;
}

