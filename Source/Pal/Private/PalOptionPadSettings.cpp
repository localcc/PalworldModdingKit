#include "PalOptionPadSettings.h"

FPalOptionPadSettings::FPalOptionPadSettings() {
    this->bIsDashHold = false;
    this->LeftStickThreshold = 0.00f;
    this->RightStickSensitivity = 0.00f;
    this->RightStickAimSensitivity = 0.00f;
    this->RightStickThreshold = 0.00f;
    this->bIsRightStickReverseYaw = false;
    this->bIsRightStickReversePitch = false;
    this->bEnableVibration = false;
    this->bEnableAimAssist = false;
    this->bIsToggleInteract = false;
}

