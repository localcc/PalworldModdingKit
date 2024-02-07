#include "CommonPlayerInputKey.h"

UCommonPlayerInputKey::UCommonPlayerInputKey() {
    this->AxisScale = 0.00f;
    this->InputTypeOverride = ECommonInputType::Count;
    this->ForcedHoldKeybindStatus = ECommonKeybindForcedHoldStatus::NoForcedHold;
    this->bIsHoldKeybind = false;
    this->bShowKeybindBorder = false;
    this->bShowTimeCountDown = false;
    this->bShowUnboundStatus = false;
    this->ProgressPercentageMID = NULL;
}

void UCommonPlayerInputKey::UpdateKeybindWidget() {
}

void UCommonPlayerInputKey::StopHoldProgress(FName HoldActionName, bool bCompletedSuccessfully) {
}

void UCommonPlayerInputKey::StartHoldProgress(FName HoldActionName, float HoldDuration) {
}

void UCommonPlayerInputKey::SetShowProgressCountDown(bool bShow) {
}

void UCommonPlayerInputKey::SetPresetNameOverride(const FName NewValue) {
}

void UCommonPlayerInputKey::SetForcedHoldKeybindStatus(ECommonKeybindForcedHoldStatus InForcedHoldKeybindStatus) {
}

void UCommonPlayerInputKey::SetForcedHoldKeybind(bool InForcedHoldKeybind) {
}

void UCommonPlayerInputKey::SetBoundKey(FKey NewBoundAction) {
}

void UCommonPlayerInputKey::SetBoundAction(FName NewBoundAction) {
}

void UCommonPlayerInputKey::SetAxisScale(const float NewValue) {
}

bool UCommonPlayerInputKey::IsHoldKeybind() const {
    return false;
}

bool UCommonPlayerInputKey::IsBoundKeyValid() const {
    return false;
}


