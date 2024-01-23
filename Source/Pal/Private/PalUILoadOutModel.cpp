#include "PalUILoadOutModel.h"

bool UPalUILoadOutModel::TryGetContainer(EPalPlayerInventoryType targetType, UPalItemContainer*& Container) const {
    return false;
}

void UPalUILoadOutModel::SelectItemSlot(const FPalItemSlotId SlotID, const EPalItemSlotPressType PressType) const {
}

bool UPalUILoadOutModel::CanSetItem(const FPalItemData& ItemData) const {
    return false;
}

UPalUILoadOutModel::UPalUILoadOutModel() {
    this->draggedTargetContainerType = EPalPlayerInventoryType::None;
}

