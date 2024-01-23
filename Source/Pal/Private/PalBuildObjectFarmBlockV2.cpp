#include "PalBuildObjectFarmBlockV2.h"

void APalBuildObjectFarmBlockV2::OnUpdateState_ServerInternal(EPalFarmCropState LastCropState, EPalFarmCropState NextCropState) {
}

APalBuildObjectFarmBlockV2::APalBuildObjectFarmBlockV2() {
    this->GrowupFX = NULL;
    this->CropActor = NULL;
}

