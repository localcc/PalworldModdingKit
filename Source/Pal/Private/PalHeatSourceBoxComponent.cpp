#include "PalHeatSourceBoxComponent.h"

UPalHeatSourceBoxComponent::UPalHeatSourceBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultActive = true;
    this->HeatSourceModule = NULL;
}

void UPalHeatSourceBoxComponent::SetActiveHeatSource(bool NextIsActive) {
}

UPalHeatSourceModule* UPalHeatSourceBoxComponent::GetModule() {
    return NULL;
}


