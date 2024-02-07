#include "PalMapObjectRecoverOtomoParameterComponent.h"

UPalMapObjectRecoverOtomoParameterComponent::UPalMapObjectRecoverOtomoParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlotNum = 5;
    this->RecoverAmountBySec = 100.00f;
    this->MenuUIWidgetClass = NULL;
}


