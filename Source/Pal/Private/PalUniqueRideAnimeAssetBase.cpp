#include "PalUniqueRideAnimeAssetBase.h"

UPalUniqueRideAnimeAssetBase::UPalUniqueRideAnimeAssetBase() {
    this->SocketName_Hand_R = TEXT("RideIK_Hand_R");
    this->SocketName_Hand_L = TEXT("RideIK_Hand_L");
    this->SocketName_Foot_R = TEXT("RideIK_Foot_R");
    this->SocketName_Foot_L = TEXT("RideIK_Foot_L");
    this->DisableLeftHandIK_BallMotion = false;
    this->RidingAnimation = NULL;
    this->RidingAnimation_Ball_Aim = NULL;
    this->RidingAnimation_Ball_Fire = NULL;
}

UAnimSequence* UPalUniqueRideAnimeAssetBase::GetRideAnimSequence() {
    return NULL;
}


