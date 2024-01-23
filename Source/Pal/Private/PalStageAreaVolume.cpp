#include "PalStageAreaVolume.h"

void APalStageAreaVolume::SetRelatedDataLayerAsset(UDataLayerAsset* DataLayerAsset) {
}

UDataLayerAsset* APalStageAreaVolume::GetRelatedDataLayerAsset() const {
    return NULL;
}


APalStageAreaVolume::APalStageAreaVolume() {
    this->RelatedDataLayerAsset = NULL;
}

