#include "PalStatus_StaminaControl.h"

void UPalStatus_StaminaControl::DecreaseStepStamina() {
}

void UPalStatus_StaminaControl::DecreaseJumpStamina(UPalCharacterMovementComponent* Movement) {
}

UPalStatus_StaminaControl::UPalStatus_StaminaControl() {
    this->IsLocalPlayerOrPal = false;
    this->IsPreCliming = false;
}

