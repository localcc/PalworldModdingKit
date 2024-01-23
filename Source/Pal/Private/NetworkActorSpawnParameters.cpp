#include "NetworkActorSpawnParameters.h"

FNetworkActorSpawnParameters::FNetworkActorSpawnParameters() {
    this->NetworkOwner = NULL;
    this->Owner = NULL;
    this->ControllerClass = NULL;
    this->SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;
    this->bAlwaysRelevant = false;
}

