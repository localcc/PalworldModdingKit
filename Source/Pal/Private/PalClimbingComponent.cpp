#include "PalClimbingComponent.h"

UPalClimbingComponent::UPalClimbingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClimbMoveSpeedRateBuff = 1.00f;
    this->ClimbStaminaSpeedRateBuff = 1.00f;
}




float UPalClimbingComponent::GetClimbStaminaSpeedRateBuff() const {
    return 0.0f;
}

float UPalClimbingComponent::GetClimbMoveSpeedRateBuff() const {
    return 0.0f;
}



