#include "PalTextBlockBase.h"

UPalTextBlockBase::UPalTextBlockBase() {
    this->IsAutoTextSetWhenWidgetRebuilt = false;
    this->IsAutoAdjustScale = false;
    this->MaxWidth = 100;
}

void UPalTextBlockBase::UpdateRowName(const FName RowName) {
}

void UPalTextBlockBase::UpdateFontSize(const int32 NewSize) {
}

void UPalTextBlockBase::SetText_GDKInternal(bool IsSuccess, const FString& OutString) {
}

void UPalTextBlockBase::OnUISettingChanged(const FPalOptionUISettings& PreSetting, const FPalOptionUISettings& NewSetting) {
}

FText UPalTextBlockBase::GetBindedOriginalText() const {
    return FText::GetEmpty();
}



