#include "PalTimerPointLightComponent.h"

void UPalTimerPointLightComponent::SetEnableWhenDayTime(FName Key, bool Enable) {
}

void UPalTimerPointLightComponent::CheckOtomoPal_AndSetRange(APalCharacter* SelfCharacter) {
}

UPalTimerPointLightComponent::UPalTimerPointLightComponent() {
    this->LightCurve = NULL;
    this->bIsLocalOnly = false;
    this->DefaultIntensity = 0.00f;
}

