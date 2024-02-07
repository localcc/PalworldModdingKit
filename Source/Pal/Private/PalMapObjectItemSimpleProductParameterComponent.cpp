#include "PalMapObjectItemSimpleProductParameterComponent.h"

UPalMapObjectItemSimpleProductParameterComponent::UPalMapObjectItemSimpleProductParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlotNum = 1;
    this->WorkSpeedAdditionalRate = 1.00f;
    this->bIsGainExp = true;
}


