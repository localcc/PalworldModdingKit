#include "PalUserWidgetOverlayUI.h"

void UPalUserWidgetOverlayUI::ResetCancelAction() {
}

void UPalUserWidgetOverlayUI::OverrideCancelAction(bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback) {
}

void UPalUserWidgetOverlayUI::ClearCancelAction() {
}

UPalUserWidgetOverlayUI::UPalUserWidgetOverlayUI() {
    this->IsEnableCancelAction = true;
}

