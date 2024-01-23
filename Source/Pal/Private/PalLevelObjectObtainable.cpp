#include "PalLevelObjectObtainable.h"

void APalLevelObjectObtainable::OnUpdateFlagMapRecord(const FName Key, const bool bFlag) {
}

void APalLevelObjectObtainable::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObjectObtainable::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}


APalLevelObjectObtainable::APalLevelObjectObtainable() {
    this->bPickedInClient = false;
}

