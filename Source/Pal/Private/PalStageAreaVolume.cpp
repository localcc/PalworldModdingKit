#include "PalStageAreaVolume.h"

APalStageAreaVolume::APalStageAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RelatedDataLayerAsset = NULL;
}

void APalStageAreaVolume::SetRelatedDataLayerAsset(UDataLayerAsset* DataLayerAsset) {
}

UDataLayerAsset* APalStageAreaVolume::GetRelatedDataLayerAsset() const {
    return NULL;
}



