#include "PalUIActionWidgetBase.h"

UPalUIActionWidgetBase::UPalUIActionWidgetBase() {
}

void UPalUIActionWidgetBase::SetActionBinding_ForBP(const FPalUIActionBindData& BindingData) {
}

void UPalUIActionWidgetBase::OverrideInputType(ECommonInputType InputType) {
}

void UPalUIActionWidgetBase::OverrideImage(FSlateBrush OverrideBrush) {
}

void UPalUIActionWidgetBase::NativeOnActionProgress(float HeldPercent) {
}

FText UPalUIActionWidgetBase::GetLocalizedDisplayText() const {
    return FText::GetEmpty();
}


