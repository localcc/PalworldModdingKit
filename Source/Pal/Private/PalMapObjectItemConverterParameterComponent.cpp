#include "PalMapObjectItemConverterParameterComponent.h"

UPalMapObjectItemConverterParameterComponent::UPalMapObjectItemConverterParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetRankMax = 0;
    this->AutoWorkAmountBySec = 0.00f;
    this->WorkSpeedAdditionalRate = 1.00f;
}


