#include "PalSpringArmComponent.h"

UPalSpringArmComponent::UPalSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterProbeChannel = ECC_MAX;
    this->PushDownOffsetOnSweepUpHit = 30;
}


