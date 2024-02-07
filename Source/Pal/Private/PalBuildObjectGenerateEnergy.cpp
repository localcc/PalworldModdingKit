#include "PalBuildObjectGenerateEnergy.h"

APalBuildObjectGenerateEnergy::APalBuildObjectGenerateEnergy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenerateEnergyType = EPalEnergyType::Electric;
    this->GenerateEnergyRateByWorker = 1.00f;
    this->MaxEnergyStorage = 100.00f;
}

void APalBuildObjectGenerateEnergy::OnUpdateWorkAssigned_ServerInternal(UPalWorkBase* Work) {
}



void APalBuildObjectGenerateEnergy::BroadcastStartGenerate_Implementation() {
}

void APalBuildObjectGenerateEnergy::BroadcastEndGenerate_Implementation() {
}


