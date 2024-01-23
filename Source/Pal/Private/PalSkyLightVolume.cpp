#include "PalSkyLightVolume.h"
#include "Components/SkyLightComponent.h"
#include "Net/UnrealNetwork.h"

void APalSkyLightVolume::OnRep_bEnabled() {
}

void APalSkyLightVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalSkyLightVolume, bEnabled);
}

APalSkyLightVolume::APalSkyLightVolume() {
    this->Component = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent0"));
    this->bEnabled = false;
    this->bDisableEnabledFlag = false;
}

