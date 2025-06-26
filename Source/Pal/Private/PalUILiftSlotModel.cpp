#include "PalUILiftSlotModel.h"

UPalUILiftSlotModel::UPalUILiftSlotModel() {
    this->CharacterSlot = NULL;
    this->Behaviour = NULL;
}

void UPalUILiftSlotModel::SelectItemSlot(const FPalItemSlotId SlotId, const EPalItemSlotPressType Type) {
}

void UPalUILiftSlotModel::SelectCharacterSlot(const FPalCharacterSlotId SlotId, const EPalItemSlotPressType Type) {
}

void UPalUILiftSlotModel::ResetLiftItem() {
}

void UPalUILiftSlotModel::OnUpdateLiftItemSourceSlot(UPalItemSlot* Slot) {
}

void UPalUILiftSlotModel::OnUpdateLiftHandleSlot(UPalIndividualCharacterSlot* Slot, UPalIndividualCharacterHandle* LastHandle) {
}

bool UPalUILiftSlotModel::IsLift() const {
    return false;
}


