#include "PalMapObjectItemChestParameterComponent.h"

UPalMapObjectItemChestParameterComponent::UPalMapObjectItemChestParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlotNum = 10;
    this->OperationRestrictType = EPalContainerOperationRestrictType::None;
    this->bAutoDestroyIfEmpty = false;
    this->CorruptionMultiplier = 1.00f;
}


