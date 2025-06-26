#include "PalFishingSpotAreaModel.h"

UPalFishingSpotAreaModel::UPalFishingSpotAreaModel() {
    this->RespawnTimeElapsed = 0.00f;
    this->RespawnTimeFinish = 0.00f;
    this->CurrentFishCount = 0;
    this->MaxFishCount = 0;
    this->SpotAreaActor = NULL;
}

void UPalFishingSpotAreaModel::OnDespawnFishShadow(int32 RemainFishCount) {
}


