#include "PalObjectPoolActivateParameter.h"

FPalObjectPoolActivateParameter::FPalObjectPoolActivateParameter() {
    this->actorClass = NULL;
    this->Owner = NULL;
    this->Instigator = NULL;
    this->bSpawnIfEmpty = false;
    this->SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;
}

