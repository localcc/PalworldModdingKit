#include "PalAnimNotifyState_MovementControl.h"

UPalAnimNotifyState_MovementControl::UPalAnimNotifyState_MovementControl() {
    this->bIsFlagNameOverride = false;
    this->MovementSpeedRate = 1.00f;
    this->AirControlXYRate = 1.00f;
    this->YawRotatorRate = 1.00f;
    this->GravityRate = 1.00f;
    this->FixedGravityZ = 0.00f;
    this->SlideAlpha = 1.00f;
    this->bIsDisableMovement = false;
    this->bIsDisableJump = false;
    this->bIsDisableCrouch = false;
    this->bIsDisablePartnerSkill = false;
}


