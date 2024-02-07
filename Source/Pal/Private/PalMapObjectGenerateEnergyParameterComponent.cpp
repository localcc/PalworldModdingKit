#include "PalMapObjectGenerateEnergyParameterComponent.h"

UPalMapObjectGenerateEnergyParameterComponent::UPalMapObjectGenerateEnergyParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenerateEnergyType = EPalEnergyType::Electric;
    this->GenerateEnergyRateByWorker = 1.00f;
    this->MaxEnergyStorage = 100.00f;
}


