#include "PalTextBlockBase.h"

UPalTextBlockBase::UPalTextBlockBase() {
    this->IsAutoTextSetWhenWidgetRebuilt = false;
    this->IsAutoAdjustScale = false;
    this->MaxWidth = 100;
}

void UPalTextBlockBase::UpdateRowName(const FName RowName) {
}

void UPalTextBlockBase::SetText_GDKInternal(bool IsSuccess, const FString& OutString) {
}

FText UPalTextBlockBase::GetBindedOriginalText() const {
    return FText::GetEmpty();
}



