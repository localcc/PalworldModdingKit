#include "PalLimitVolumeSphereComponent.h"

UPalLimitVolumeSphereComponent::UPalLimitVolumeSphereComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->LimitFlags = 0;
}


