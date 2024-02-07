#include "PalTemperatureComponent.h"

UPalTemperatureComponent::UPalTemperatureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentTemperature = 0;
    this->SelfKeyName = TEXT("TemperatureComponent");
}

void UPalTemperatureComponent::RemoveHeatSource(FName UniqueName) {
}

void UPalTemperatureComponent::OnChangeHour() {
}

int32 UPalTemperatureComponent::GetCurrentTemperature() {
    return 0;
}

void UPalTemperatureComponent::CallOnChangeTemperature_Implementation(int32 Next) {
}

void UPalTemperatureComponent::CallAllDelegate() {
}

void UPalTemperatureComponent::AddHeatSourceInfo(FName UniqueName, FPalHeatSourceInfo HeatInfo) {
}

void UPalTemperatureComponent::AddHeatSource(FName UniqueName, int32 HeatLevel) {
}


