#include "PalLevelObjectObtainable.h"

APalLevelObjectObtainable::APalLevelObjectObtainable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPickedInClient = false;
}

void APalLevelObjectObtainable::OnUpdateFlagMapRecord(const FName Key, const bool bFlag) {
}

void APalLevelObjectObtainable::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalLevelObjectObtainable::OnCompleteSyncPlayer(APalPlayerState* PlayerState) {
}



