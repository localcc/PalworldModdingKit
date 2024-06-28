#include "PalTemperatureComponent.h"
#include "Net/UnrealNetwork.h"

UPalTemperatureComponent::UPalTemperatureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentTemperature = 0;
    this->SelfKeyName = TEXT("TemperatureComponent");
}

void UPalTemperatureComponent::RemoveHeatSource(FName UniqueName) {
}

void UPalTemperatureComponent::OnRep_CurrentTemperature() {
}

void UPalTemperatureComponent::OnChangeHour() {
}

int32 UPalTemperatureComponent::GetCurrentTemperature() {
    return 0;
}

void UPalTemperatureComponent::CallAllDelegate() {
}

void UPalTemperatureComponent::AddHeatSourceInfo(FName UniqueName, FPalHeatSourceInfo HeatInfo) {
}

void UPalTemperatureComponent::AddHeatSource(FName UniqueName, int32 HeatLevel) {
}

void UPalTemperatureComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalTemperatureComponent, CurrentTemperature);
}


