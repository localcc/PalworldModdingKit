#include "PalUserWidgetOverlayUI.h"
#include "EPalWidgetInputMode.h"

UPalUserWidgetOverlayUI::UPalUserWidgetOverlayUI() {
    this->InputConfig = EPalWidgetInputMode::Menu;
    this->IsEnableCancelAction = true;
}

void UPalUserWidgetOverlayUI::ResetCancelAction() {
}

void UPalUserWidgetOverlayUI::OverrideCancelAction(bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback) {
}

void UPalUserWidgetOverlayUI::ClearCancelAction() {
}


