#include "PalMapObjectGenerateEnergyModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectGenerateEnergyModel::UPalMapObjectGenerateEnergyModel() {
    this->EnergyType = EPalEnergyType::None;
    this->GenerateEnergyRateByWorker = 1.00f;
    this->MaxEnergyStorage = 1.00f;
    this->StoredEnergyAmount = 0.00f;
    this->ConsumeEnergySpeed = 0.00f;
}

void UPalMapObjectGenerateEnergyModel::OnUpdateAssignedCharacter_ServerInternal(UPalWorkBase* Work) {
}

void UPalMapObjectGenerateEnergyModel::OnRep_StoredEnergyAmount() {
}

float UPalMapObjectGenerateEnergyModel::GetStoredEnergyAmount() const {
    return 0.0f;
}

float UPalMapObjectGenerateEnergyModel::GetMaxEnergyStorage() const {
    return 0.0f;
}

EPalEnergyType UPalMapObjectGenerateEnergyModel::GetEnergyType() const {
    return EPalEnergyType::None;
}

void UPalMapObjectGenerateEnergyModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, EnergyType);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, GenerateEnergyRateByWorker);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, MaxEnergyStorage);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, StoredEnergyAmount);
    DOREPLIFETIME(UPalMapObjectGenerateEnergyModel, ConsumeEnergySpeed);
}


