#include "PalDialogParameterBase.h"

UPalDialogParameterBase::UPalDialogParameterBase() {
    this->DialogType = EPalDialogType::Alert;
    this->IsCloseWhenDamaged = false;
    this->IsEnableShortcutConfirmInput = false;
}

void UPalDialogParameterBase::InvokeCallback(const bool bResult) {
}


