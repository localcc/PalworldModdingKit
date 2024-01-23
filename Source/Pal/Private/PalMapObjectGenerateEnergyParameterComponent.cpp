#include "PalMapObjectGenerateEnergyParameterComponent.h"

UPalMapObjectGenerateEnergyParameterComponent::UPalMapObjectGenerateEnergyParameterComponent() {
    this->GenerateEnergyType = EPalEnergyType::Electric;
    this->GenerateEnergyRateByWorker = 1.00f;
    this->MaxEnergyStorage = 100.00f;
}

