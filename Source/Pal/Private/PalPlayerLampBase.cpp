#include "PalPlayerLampBase.h"

APalPlayerLampBase::APalPlayerLampBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APalPlayerLampBase::SetLampEnable(bool bEnableLamp, bool bForceCallEvent) {
}


bool APalPlayerLampBase::IsLampEnable() const {
    return false;
}

TArray<UPalTimerPointLightComponent*> APalPlayerLampBase::GetTimerLightComponents() const {
    return TArray<UPalTimerPointLightComponent*>();
}


