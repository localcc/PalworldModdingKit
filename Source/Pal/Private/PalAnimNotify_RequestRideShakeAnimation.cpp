#include "PalAnimNotify_RequestRideShakeAnimation.h"

UPalAnimNotify_RequestRideShakeAnimation::UPalAnimNotify_RequestRideShakeAnimation() {
    this->ApplyRate = 1.00f;
    this->PlaySpeedRate = 1.00f;
    this->bIsAdjustAnimationSpeed = true;
}

void UPalAnimNotify_RequestRideShakeAnimation::OnStartAim() const {
}

void UPalAnimNotify_RequestRideShakeAnimation::OnEndMotion(UAnimMontage* Montage, bool bInterrupted) const {
}


