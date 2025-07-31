#include "PalActionMovementModeBase.h"

UPalActionMovementModeBase::UPalActionMovementModeBase() {
    this->MovementMode = EPalCharacterMovementCustomMode::None;
    this->MovementBaseType = EPalActionMovementBaseType::Custom;
    this->bEndActionOnMovementModeChange = true;
    this->EndReplicationType = EPalActionMovementEndReplicationType::None;
    this->bApplyFinishVelocityOnEndAction = false;
    this->BrakingDeceleration = 0.00f;
    this->Acceleration = 0.00f;
    this->MaxSpeed = 0.00f;
}

void UPalActionMovementModeBase::SetMovementMode(TEnumAsByte<EMovementMode> NewMode, uint8 NewMovementMode) {
}

void UPalActionMovementModeBase::SetInterrupt(bool InInterrupt) {
}

void UPalActionMovementModeBase::OnMovementModeChanged(UPalCharacterMovementComponent* Component, TEnumAsByte<EMovementMode> PrevMode, TEnumAsByte<EMovementMode> NewMode, EPalCharacterMovementCustomMode PrevCustomMode, EPalCharacterMovementCustomMode NewCustomMode) {
}

bool UPalActionMovementModeBase::MovingOnGround_Implementation() const {
    return false;
}








bool UPalActionMovementModeBase::IsInterrupt() const {
    return false;
}

bool UPalActionMovementModeBase::IsFlying_Implementation() const {
    return false;
}

bool UPalActionMovementModeBase::IsFalling_Implementation() const {
    return false;
}

bool UPalActionMovementModeBase::IsAsyncBegun() const {
    return false;
}

bool UPalActionMovementModeBase::IsApplyFinishVelocityOnEndAction_Implementation() const {
    return false;
}

EPalActionMovementBaseType UPalActionMovementModeBase::GetMovementType() const {
    return EPalActionMovementBaseType::Walking;
}

EPalCharacterMovementCustomMode UPalActionMovementModeBase::GetMovementMode() const {
    return EPalCharacterMovementCustomMode::None;
}

UPalCharacterMovementComponent* UPalActionMovementModeBase::GetMovementComponent() const {
    return NULL;
}

float UPalActionMovementModeBase::GetMaxSpeed() const {
    return 0.0f;
}

float UPalActionMovementModeBase::GetBrakingDeceleration() const {
    return 0.0f;
}

float UPalActionMovementModeBase::GetAcceleration() const {
    return 0.0f;
}

void UPalActionMovementModeBase::CallEndAction(bool InInterrupt) {
}


