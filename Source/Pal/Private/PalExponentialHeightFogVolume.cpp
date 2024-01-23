#include "PalExponentialHeightFogVolume.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Net/UnrealNetwork.h"

void APalExponentialHeightFogVolume::OnRep_bEnabled() {
}

void APalExponentialHeightFogVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalExponentialHeightFogVolume, bEnabled);
}

APalExponentialHeightFogVolume::APalExponentialHeightFogVolume() {
    this->Component = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->bEnabled = false;
    this->bEnableSwitchVisibility = true;
    this->bDisableEnabledFlag = false;
}

