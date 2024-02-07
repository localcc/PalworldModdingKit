#include "PalBuildObjectFarmBlockV2.h"

APalBuildObjectFarmBlockV2::APalBuildObjectFarmBlockV2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrowupFX = NULL;
    this->CropActor = NULL;
}

void APalBuildObjectFarmBlockV2::OnUpdateState_ServerInternal(EPalFarmCropState LastCropState, EPalFarmCropState NextCropState) {
}


