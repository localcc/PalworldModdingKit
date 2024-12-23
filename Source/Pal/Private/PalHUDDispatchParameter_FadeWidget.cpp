#include "PalHUDDispatchParameter_FadeWidget.h"

UPalHUDDispatchParameter_FadeWidget::UPalHUDDispatchParameter_FadeWidget() {
    this->FadeWidgetType = EPalFadeWidgetType::Invalid;
    this->FadeInTime = 1.00f;
    this->FadeOutTime = 1.00f;
    this->ShowLoadingProgress = false;
}

void UPalHUDDispatchParameter_FadeWidget::CallOnStartFadeOutDelegates() {
}

void UPalHUDDispatchParameter_FadeWidget::CallOnStartFadeInDelegates() {
}

void UPalHUDDispatchParameter_FadeWidget::CallOnEndFadeOutDelegates() {
}

void UPalHUDDispatchParameter_FadeWidget::CallOnEndFadeInDelegates() {
}


