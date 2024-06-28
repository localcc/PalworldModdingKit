#include "PalUIBaseCampWorkersModel.h"

UPalUIBaseCampWorkersModel::UPalUIBaseCampWorkersModel() {
    this->CurrentPageIndex = 0;
}

void UPalUIBaseCampWorkersModel::ToPage(const int32 pageIndex) {
}

void UPalUIBaseCampWorkersModel::SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType) {
}

void UPalUIBaseCampWorkersModel::SelectFirstEmptyHandleSlot() {
}

int32 UPalUIBaseCampWorkersModel::GetWholePageCount() const {
    return 0;
}

int32 UPalUIBaseCampWorkersModel::GetSlotCountInPage() const {
    return 0;
}

TArray<UPalIndividualCharacterSlot*> UPalUIBaseCampWorkersModel::GetCurrentPageSlots() const {
    return TArray<UPalIndividualCharacterSlot*>();
}

UPalBaseCampModel* UPalUIBaseCampWorkersModel::GetBaseCampModel(const int32 pageIndex) const {
    return NULL;
}

FGuid UPalUIBaseCampWorkersModel::GetBaseCampId() const {
    return FGuid{};
}


