#include "PalHeatSourceBoxComponent.h"

void UPalHeatSourceBoxComponent::SetActiveHeatSource(bool NextIsActive) {
}

UPalHeatSourceModule* UPalHeatSourceBoxComponent::GetModule() {
    return NULL;
}

UPalHeatSourceBoxComponent::UPalHeatSourceBoxComponent() {
    this->DefaultActive = true;
    this->HeatSourceModule = NULL;
}

