#include "PalStaticMeshImposterHISMComponent.h"

UPalStaticMeshImposterHISMComponent::UPalStaticMeshImposterHISMComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->Mobility = EComponentMobility::Stationary;
    this->CastShadow = false;
}


