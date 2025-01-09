#include "PalMapObjectEnergyStorageParameterComponent.h"

UPalMapObjectEnergyStorageParameterComponent::UPalMapObjectEnergyStorageParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenerateEnergyType = EPalEnergyType::Electric;
    this->MaxEnergyStorage = 100.00f;
}


