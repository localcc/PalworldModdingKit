#include "PalUIOffScreenLoupeBase.h"

UPalUIOffScreenLoupeBase::UPalUIOffScreenLoupeBase() {
    this->displayDotBorder = 0.80f;
    this->isWaitedClose = false;
    this->isOverrideVisibility = false;
    this->isRequestedDisplay = false;
    this->overrideVisibility = ESlateVisibility::Visible;
}

void UPalUIOffScreenLoupeBase::SetOverrideVisibility(ESlateVisibility NewVisibility) {
}

void UPalUIOffScreenLoupeBase::ResetOverrideVisibility() {
}

void UPalUIOffScreenLoupeBase::RequestHide() {
}

void UPalUIOffScreenLoupeBase::RequestDisplay() {
}

void UPalUIOffScreenLoupeBase::RequestClose() {
}





void UPalUIOffScreenLoupeBase::CloseSelf() {
}



