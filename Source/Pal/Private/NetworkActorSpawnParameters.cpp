#include "NetworkActorSpawnParameters.h"

FNetworkActorSpawnParameters::FNetworkActorSpawnParameters() {
    this->NetworkOwner = NULL;
    this->Owner = NULL;
    this->ControllerClass = NULL;
    this->SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::Undefined;
    this->bAlwaysRelevant = false;
    this->bNeedAdjustToFloor = false;
    this->AdjustUpOffset = 0.00f;
    this->bAdjustShortRayLength = false;
}

