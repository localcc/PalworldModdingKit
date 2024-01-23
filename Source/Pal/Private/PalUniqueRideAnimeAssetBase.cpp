#include "PalUniqueRideAnimeAssetBase.h"

UAnimSequence* UPalUniqueRideAnimeAssetBase::GetRideAnimSequence() {
    return NULL;
}

UPalUniqueRideAnimeAssetBase::UPalUniqueRideAnimeAssetBase() {
    this->DisableLeftHandIK_BallMotion = false;
    this->RidingAnimation = NULL;
    this->RidingAnimation_Ball_Aim = NULL;
    this->RidingAnimation_Ball_Fire = NULL;
}

