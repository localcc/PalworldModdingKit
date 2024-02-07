#include "PalUILoadOutModel.h"

UPalUILoadOutModel::UPalUILoadOutModel() {
    this->draggedTargetContainerType = EPalPlayerInventoryType::None;
}

bool UPalUILoadOutModel::TryGetContainer(EPalPlayerInventoryType targetType, UPalItemContainer*& Container) const {
    return false;
}

void UPalUILoadOutModel::SelectItemSlot(const FPalItemSlotId SlotID, const EPalItemSlotPressType PressType) const {
}

bool UPalUILoadOutModel::CanSetItem(const FPalItemData& ItemData) const {
    return false;
}


