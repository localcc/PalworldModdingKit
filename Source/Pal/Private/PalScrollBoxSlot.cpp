#include "PalScrollBoxSlot.h"

void UPalScrollBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UPalScrollBoxSlot::SetPadding(FMargin InPadding) {
}

void UPalScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

UPalScrollBoxSlot::UPalScrollBoxSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

