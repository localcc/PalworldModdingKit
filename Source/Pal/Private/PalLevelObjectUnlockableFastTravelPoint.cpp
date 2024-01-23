#include "PalLevelObjectUnlockableFastTravelPoint.h"

void APalLevelObjectUnlockableFastTravelPoint::OnUpdateFlagMapRecord(const FName Key, const bool bFlag) {
}

void APalLevelObjectUnlockableFastTravelPoint::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObjectUnlockableFastTravelPoint::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}

bool APalLevelObjectUnlockableFastTravelPoint::IsUnlocked() const {
    return false;
}


APalLevelObjectUnlockableFastTravelPoint::APalLevelObjectUnlockableFastTravelPoint() {
    this->bUnlocked = false;
    this->EnableRequestUnlock = true;
}

