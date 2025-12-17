#include "PalBuildObjectVisualControlComponent.h"

UPalBuildObjectVisualControlComponent::UPalBuildObjectVisualControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageNiagaraComp = NULL;
}

void UPalBuildObjectVisualControlComponent::OnSetPaintDataInServer(UPalMapObjectModelPaint* Paint) {
}

void UPalBuildObjectVisualControlComponent::OnReplicatedChildActor(UChildActorComponent* ChildActorComponent) {
}

void UPalBuildObjectVisualControlComponent::OnPaintDataChanged(const FPalBuildObjectPaintData& NewPaintData) {
}

UMaterialInstance* UPalBuildObjectVisualControlComponent::GetMaterialInstanceNormal(UMeshComponent* MeshComponent, const int32 MaterialIndex) {
    return NULL;
}

UMaterialInstanceDynamic* UPalBuildObjectVisualControlComponent::GetMaterialInstanceDynamic(UMeshComponent* MeshComponent, const int32 MaterialIndex) {
    return NULL;
}

void UPalBuildObjectVisualControlComponent::BroadcastPaintData_ToAll_Implementation(const FPalBuildObjectPaintData& InPaintData) {
}


