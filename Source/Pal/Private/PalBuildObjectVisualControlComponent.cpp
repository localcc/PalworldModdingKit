#include "PalBuildObjectVisualControlComponent.h"

UPalBuildObjectVisualControlComponent::UPalBuildObjectVisualControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageNiagaraComp = NULL;
}

void UPalBuildObjectVisualControlComponent::OnReplicatedChildActor(UChildActorComponent* ChildActorComponent) {
}


