#include "PalMapObjectEnergyModule.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectEnergyModule::UPalMapObjectEnergyModule() {
    this->EnergyType = EPalEnergyType::None;
    this->ConsumeEnergySpeed = 0.00f;
    this->CurrentConsumeEnergySpeed = 0.00f;
    this->CurrentState = EPalMapObjectEnergyModuleStatusType::Waiting;
    this->bRequiredConsumeEnergy = false;
}

void UPalMapObjectEnergyModule::RemoveHUD() {
}

void UPalMapObjectEnergyModule::OnRep_CurrentState() {
}

bool UPalMapObjectEnergyModule::IsRequiredEnergy() const {
    return false;
}

EPalEnergyType UPalMapObjectEnergyModule::GetEnergyType() const {
    return EPalEnergyType::None;
}

EPalMapObjectEnergyModuleStatusType UPalMapObjectEnergyModule::GetCurrentState() const {
    return EPalMapObjectEnergyModuleStatusType::Providable;
}

float UPalMapObjectEnergyModule::GetCurrentConsumeEnergySpeed() const {
    return 0.0f;
}

float UPalMapObjectEnergyModule::GetConsumeEnergySpeed() const {
    return 0.0f;
}

bool UPalMapObjectEnergyModule::CanConsumeEnergy() const {
    return false;
}

void UPalMapObjectEnergyModule::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectEnergyModule, EnergyType);
    DOREPLIFETIME(UPalMapObjectEnergyModule, ConsumeEnergySpeed);
    DOREPLIFETIME(UPalMapObjectEnergyModule, CurrentConsumeEnergySpeed);
    DOREPLIFETIME(UPalMapObjectEnergyModule, CurrentState);
}


