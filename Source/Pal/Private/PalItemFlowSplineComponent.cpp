#include "PalItemFlowSplineComponent.h"

UPalItemFlowSplineComponent::UPalItemFlowSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemSpawnInterval = 0.00f;
    this->FlowSpeedRate = 0.00f;
    this->ItemVisualBlueprintClass = NULL;
}

void UPalItemFlowSplineComponent::UpdateTargetItem(const FName InStaticItemId) {
}

void UPalItemFlowSplineComponent::UpdateIsFlowing(const bool bOn) {
}


