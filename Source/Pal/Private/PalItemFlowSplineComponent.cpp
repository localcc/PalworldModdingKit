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


FLinearColor UPalItemFlowSplineComponent::GetMaterialInstanceVectorParameterValue(UMaterialInstance* MaterialInstance, const FName ParameterName) {
    return FLinearColor{};
}

UMaterialInstance* UPalItemFlowSplineComponent::GetBuildObjectMaterialInstanceNormal(UMeshComponent* MeshComponent, const int32 MaterialIndex) const {
    return NULL;
}

UMaterialInstanceDynamic* UPalItemFlowSplineComponent::GetBuildObjectMaterialInstanceDynamic(UMeshComponent* MeshComponent, const int32 MaterialIndex) const {
    return NULL;
}


