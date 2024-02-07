#include "PalRichTextBlockBase.h"

UPalRichTextBlockBase::UPalRichTextBlockBase() {
    this->IsAutoTextSetWhenWidgetRebuilt = false;
    this->IsAutoAdjustScale = false;
    this->MaxWidth = 100;
}

void UPalRichTextBlockBase::SetText_GDKInternal(bool IsSuccess, const FString& OutString) {
}

void UPalRichTextBlockBase::Left(const int32 Count, FText& OutText) {
}

int32 UPalRichTextBlockBase::GetTextLengthWithoutTag() const {
    return 0;
}

FText UPalRichTextBlockBase::GetBindedOriginalText() const {
    return FText::GetEmpty();
}


