#include "PalProjectileMovementComponent.h"

UPalProjectileMovementComponent::UPalProjectileMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseHomingAngleLimit = false;
    this->HomingAngleLimit = 90.00f;
    this->bIgnoreHomingAngleLimitUntilEnteringAngleReached = false;
    this->bEnteringAngleReached = false;
}


