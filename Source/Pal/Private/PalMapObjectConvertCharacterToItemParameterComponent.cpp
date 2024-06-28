#include "PalMapObjectConvertCharacterToItemParameterComponent.h"

UPalMapObjectConvertCharacterToItemParameterComponent::UPalMapObjectConvertCharacterToItemParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ContainerSlotNum = 10;
    this->ConvertQueueCapacity = 3;
    this->RequiredConvertProcessTime = 5.00f;
}


