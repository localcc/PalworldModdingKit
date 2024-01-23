#include "PalDialogParameterBase.h"

void UPalDialogParameterBase::InvokeCallback(const bool bResult) {
}

UPalDialogParameterBase::UPalDialogParameterBase() {
    this->DialogType = EPalDialogType::Alert;
    this->IsCloseWhenDamaged = false;
    this->IsEnableShortcutConfirmInput = false;
}

