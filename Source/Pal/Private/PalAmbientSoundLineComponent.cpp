#include "PalAmbientSoundLineComponent.h"

UPalAmbientSoundLineComponent::UPalAmbientSoundLineComponent() {
    this->AmbientEvent = NULL;
    this->bIsEnableAmbientSound = true;
    this->AmbinetSoundLineObject = NULL;
    this->AkComponent = NULL;
}

