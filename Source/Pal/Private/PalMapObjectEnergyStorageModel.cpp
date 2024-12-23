#include "PalMapObjectEnergyStorageModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectEnergyStorageModel::UPalMapObjectEnergyStorageModel() {
    this->EnergyType = EPalEnergyType::None;
    this->MaxEnergyStorage = 0.00f;
    this->StoredEnergyAmount = 0.00f;
    this->ConsumeEnergySpeed = 0.00f;
}

void UPalMapObjectEnergyStorageModel::OnRep_StoredEnergyAmount() {
}

float UPalMapObjectEnergyStorageModel::GetStoredEnergyAmount() const {
    return 0.0f;
}

float UPalMapObjectEnergyStorageModel::GetMaxEnergyStorage() const {
    return 0.0f;
}

EPalEnergyType UPalMapObjectEnergyStorageModel::GetEnergyType() const {
    return EPalEnergyType::None;
}

void UPalMapObjectEnergyStorageModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectEnergyStorageModel, EnergyType);
    DOREPLIFETIME(UPalMapObjectEnergyStorageModel, MaxEnergyStorage);
    DOREPLIFETIME(UPalMapObjectEnergyStorageModel, StoredEnergyAmount);
    DOREPLIFETIME(UPalMapObjectEnergyStorageModel, ConsumeEnergySpeed);
}


