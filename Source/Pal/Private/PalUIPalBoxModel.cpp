#include "PalUIPalBoxModel.h"

UPalUIPalBoxModel::UPalUIPalBoxModel() {
    this->CurrentPageIndex = 0;
}

void UPalUIPalBoxModel::ToPrevPage() {
}

void UPalUIPalBoxModel::ToNextPage() {
}

void UPalUIPalBoxModel::SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType) {
}

int32 UPalUIPalBoxModel::GetWholePageCount() const {
    return 0;
}

int32 UPalUIPalBoxModel::GetSlotCountInPage() const {
    return 0;
}

TArray<UPalIndividualCharacterSlot*> UPalUIPalBoxModel::GetCurrentPageSlots() const {
    return TArray<UPalIndividualCharacterSlot*>();
}


