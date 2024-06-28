#include "PalDialogParameterBase.h"

UPalDialogParameterBase::UPalDialogParameterBase() {
    this->DialogType = EPalDialogType::Alert;
    this->TextJustify = ETextJustify::Center;
    this->IsCloseWhenDamaged = false;
    this->IsEnableShortcutConfirmInput = false;
}

void UPalDialogParameterBase::InvokeCallback(const bool bResult) {
}


