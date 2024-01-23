#include "PalMapObjectHatchingEggParameterComponent.h"

float UPalMapObjectHatchingEggParameterComponent::GetDefaultAutoWorkAmountBySec() {
    return 0.0f;
}

UPalMapObjectHatchingEggParameterComponent::UPalMapObjectHatchingEggParameterComponent() {
    this->AutoWorkAmountBySec = 0.00f;
    this->MenuUIWidgetClass = NULL;
}

