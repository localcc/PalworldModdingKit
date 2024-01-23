#include "PalMapObjectItemChestParameterComponent.h"

UPalMapObjectItemChestParameterComponent::UPalMapObjectItemChestParameterComponent() {
    this->SlotNum = 10;
    this->OperationRestrictType = EPalContainerOperationRestrictType::None;
    this->bAutoDestroyIfEmpty = false;
    this->CorruptionMultiplier = 1.00f;
}

