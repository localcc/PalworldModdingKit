#include "PalRichTextBlockBase.h"

UPalRichTextBlockBase::UPalRichTextBlockBase() {
    this->IsAutoTextSetWhenWidgetRebuilt = false;
    this->IsAutoAdjustScale = false;
    this->FontSizeOverride_VeryLarge = 16;
    this->IgnoreFontSizeSetting = false;
    this->MaxWidth = 100;
    this->JustificationVerticalCenter = false;
}

void UPalRichTextBlockBase::SetText_GDKInternal(bool IsSuccess, const FString& OutString) {
}

void UPalRichTextBlockBase::OnUISettingChanged(const FPalOptionUISettings& PreSetting, const FPalOptionUISettings& NewSetting) {
}

void UPalRichTextBlockBase::Left(const int32 Count, FText& OutText) {
}

int32 UPalRichTextBlockBase::GetTextLengthWithoutTag() const {
    return 0;
}

FText UPalRichTextBlockBase::GetBindedOriginalText() const {
    return FText::GetEmpty();
}


