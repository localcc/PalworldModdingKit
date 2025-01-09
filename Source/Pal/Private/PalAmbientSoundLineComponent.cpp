#include "PalAmbientSoundLineComponent.h"

UPalAmbientSoundLineComponent::UPalAmbientSoundLineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeBodySetup = NULL;
    this->AmbientEvent = NULL;
    this->bIsEnableAmbientSound = true;
    this->AmbinetSoundLineObject = NULL;
    this->AkComponent = NULL;
}


