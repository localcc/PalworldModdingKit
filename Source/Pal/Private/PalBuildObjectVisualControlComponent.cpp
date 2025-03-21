#include "PalBuildObjectVisualControlComponent.h"

UPalBuildObjectVisualControlComponent::UPalBuildObjectVisualControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageNiagaraComp = NULL;
}

void UPalBuildObjectVisualControlComponent::OnReplicatedChildActor(UChildActorComponent* ChildActorComponent) {
}

UMaterialInstance* UPalBuildObjectVisualControlComponent::GetMaterialInstanceNormal(UMeshComponent* MeshComponent, const int32 MaterialIndex) {
    return NULL;
}

UMaterialInstanceDynamic* UPalBuildObjectVisualControlComponent::GetMaterialInstanceDynamic(UMeshComponent* MeshComponent, const int32 MaterialIndex) {
    return NULL;
}


