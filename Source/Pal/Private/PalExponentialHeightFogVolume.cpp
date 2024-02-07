#include "PalExponentialHeightFogVolume.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Net/UnrealNetwork.h"

APalExponentialHeightFogVolume::APalExponentialHeightFogVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->Component = (UExponentialHeightFogComponent*)RootComponent;
    this->bEnabled = false;
    this->bEnableSwitchVisibility = true;
    this->bDisableEnabledFlag = false;
}

void APalExponentialHeightFogVolume::OnRep_bEnabled() {
}

void APalExponentialHeightFogVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalExponentialHeightFogVolume, bEnabled);
}


