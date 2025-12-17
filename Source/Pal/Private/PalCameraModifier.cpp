#include "PalCameraModifier.h"

UPalCameraModifier::UPalCameraModifier() {
    this->Priority = 0.00f;
    this->Mode = EPalCameraModifierMode::OneShot;
    this->Duration = 1.00f;
    this->CancelAllowTime = 0.00f;
    this->BlendInTime = 0.50f;
    this->BlendInEaseFunc = EEasingFunc::Linear;
    this->BlendInEaseExponent = 2.00f;
    this->BlendOutTime = 0.50f;
    this->BlendOutEaseFunc = EEasingFunc::Linear;
    this->BlendOutEaseExponent = 2.00f;
    this->FovModifyType = EPalCameraModifierParameterType::None;
    this->TargetFoV = 0.00f;
    this->CameraOffsetModifyType = EPalCameraModifierParameterType::None;
    this->CameraLengthModifyType = EPalCameraModifierParameterType::None;
    this->TargetCameraLength = 0.00f;
    this->bIsActive = false;
    this->ElapsedTime = 0.00f;
    this->BlendOutElapsedTime = 0.00f;
    this->RestartStartTime = 0.00f;
    this->bBlendingIn = false;
    this->bBlendingOut = false;
    this->bRestartingBlendingIn = false;
}


