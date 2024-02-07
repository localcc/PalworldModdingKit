#include "PalTimerPointLightComponent.h"

UPalTimerPointLightComponent::UPalTimerPointLightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LightCurve = NULL;
    this->bIsLocalOnly = false;
    this->DefaultIntensity = 0.00f;
}

void UPalTimerPointLightComponent::SetEnableWhenDayTime(FName Key, bool Enable) {
}

void UPalTimerPointLightComponent::CheckOtomoPal_AndSetRange(APalCharacter* SelfCharacter) {
}


