#include "PalFoliageRemoveVolumeBoxComponent.h"

UPalFoliageRemoveVolumeBoxComponent::UPalFoliageRemoveVolumeBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
}

void UPalFoliageRemoveVolumeBoxComponent::OnPreRegisterFoliageInstance(const UPalFoliageGridModel* GridModel, const FName ModelId, UPalFoliageInstance* Instance) {
}


