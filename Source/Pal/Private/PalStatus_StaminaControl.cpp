#include "PalStatus_StaminaControl.h"

UPalStatus_StaminaControl::UPalStatus_StaminaControl() {
    this->bIsNerverEnd = true;
    this->IsLocalPlayerOrPal = false;
    this->IsPreCliming = false;
}

void UPalStatus_StaminaControl::DecreaseStepStamina() {
}

void UPalStatus_StaminaControl::DecreaseJumpStamina(UPalCharacterMovementComponent* Movement) {
}


