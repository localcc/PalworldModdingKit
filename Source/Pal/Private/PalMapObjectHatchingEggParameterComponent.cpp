#include "PalMapObjectHatchingEggParameterComponent.h"

UPalMapObjectHatchingEggParameterComponent::UPalMapObjectHatchingEggParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoWorkAmountBySec = 0.00f;
    this->MenuUIWidgetClass = NULL;
}

float UPalMapObjectHatchingEggParameterComponent::GetDefaultAutoWorkAmountBySec() {
    return 0.0f;
}


