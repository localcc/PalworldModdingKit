#include "PalLimitVolumeBoxComponent.h"

UPalLimitVolumeBoxComponent::UPalLimitVolumeBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LimitFlags = 0;
    this->bWorldBuildAreaLimit = false;
}


