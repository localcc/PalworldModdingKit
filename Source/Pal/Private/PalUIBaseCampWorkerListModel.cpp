#include "PalUIBaseCampWorkerListModel.h"

UPalUIBaseCampWorkerListModel::UPalUIBaseCampWorkerListModel() {
}

void UPalUIBaseCampWorkerListModel::SelectHandleSlot(const int32 DisplayIndex, const EPalItemSlotPressType PressType) {
}

void UPalUIBaseCampWorkerListModel::SelectFirstEmptyHandleSlot() {
}

int32 UPalUIBaseCampWorkerListModel::GetSlotCountInPage() const {
    return 0;
}

void UPalUIBaseCampWorkerListModel::GetCurrentPageSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const {
}

FGuid UPalUIBaseCampWorkerListModel::GetCurrentDisplayBaseCampId() const {
    return FGuid{};
}

FString UPalUIBaseCampWorkerListModel::GetBaseCampName() const {
    return TEXT("");
}

FGuid UPalUIBaseCampWorkerListModel::GetBaseCampId() const {
    return FGuid{};
}


