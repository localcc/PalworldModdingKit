#include "PalItemFlowSplineComponent.h"

void UPalItemFlowSplineComponent::UpdateTargetItem(const FName InStaticItemId) {
}

void UPalItemFlowSplineComponent::UpdateIsFlowing(const bool bOn) {
}

UPalItemFlowSplineComponent::UPalItemFlowSplineComponent() {
    this->ItemSpawnInterval = 0.00f;
    this->FlowSpeedRate = 0.00f;
    this->ItemVisualBlueprintClass = NULL;
}

