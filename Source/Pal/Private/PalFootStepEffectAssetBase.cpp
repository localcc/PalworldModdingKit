#include "PalFootStepEffectAssetBase.h"

UPalFootStepEffectAssetBase::UPalFootStepEffectAssetBase() {
}

TSoftObjectPtr<UNiagaraSystem> UPalFootStepEffectAssetBase::GetEffectObjectPtr(EPalLandingType LandingType, TEnumAsByte<EPhysicalSurface> PhysicalSurface) const {
    return NULL;
}

bool UPalFootStepEffectAssetBase::GetEffectInfo(EPalLandingType LandingType, FFootStepEffectInfo& OutVal) const {
    return false;
}


