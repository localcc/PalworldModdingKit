#include "PalHeatSourceSphereComponent.h"

void UPalHeatSourceSphereComponent::SetActiveHeatSource(bool NextIsActive) {
}

UPalHeatSourceModule* UPalHeatSourceSphereComponent::GetModule() {
    return NULL;
}

UPalHeatSourceSphereComponent::UPalHeatSourceSphereComponent() {
    this->DefaultActive = true;
    this->HeatSourceModule = NULL;
}

