#include "PalMapObjectDisplayCharacterParameterComponent.h"

UPalMapObjectDisplayCharacterParameterComponent::UPalMapObjectDisplayCharacterParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlotNum = 40;
    this->RecoverAmountBySec = -1.00f;
    this->ControllerClass = NULL;
    this->MenuUIWidgetClass = NULL;
}


