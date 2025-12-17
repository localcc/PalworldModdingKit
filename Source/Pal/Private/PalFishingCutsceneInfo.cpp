#include "PalFishingCutsceneInfo.h"

FPalFishingCutsceneInfo::FPalFishingCutsceneInfo() {
    this->SkeletalMesh = NULL;
    this->CameraSizeType = EPalSizeType::None;
    this->PlayerMotionType = EPalFishingPlayerMotionType::None;
    this->CameraTargetDistanceOffset = 0.00f;
    this->FishingHeightOffset = 0.00f;
    this->bHasFishingRod = false;
    this->FishingCaughtJumpMontage = NULL;
    this->FishingCaughtMontage = NULL;
}

