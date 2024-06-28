#include "PalMapObjectPickupItemParameterComponent.h"

UPalMapObjectPickupItemParameterComponent::UPalMapObjectPickupItemParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LongHoldInteractDuration = 0.00f;
    this->InteractPlayerActionType = EPalActionType::None;
    this->bForceIgnoreSaveItemContainer = false;
}


