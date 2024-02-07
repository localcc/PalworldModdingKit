#include "PalItemContainerManager.h"

UPalItemContainerManager::UPalItemContainerManager() {
}

bool UPalItemContainerManager::TryGetSlot(const FPalItemSlotId& SlotID, UPalItemSlot*& Slot) const {
    return false;
}

bool UPalItemContainerManager::TryGetContainer(const FPalContainerId& ContainerId, UPalItemContainer*& Container) const {
    return false;
}

FGuid UPalItemContainerManager::GetGroupIdByItemSlotId(const UObject* WorldContextObject, const FPalItemSlotId& SlotID) {
    return FGuid{};
}

FGuid UPalItemContainerManager::GetGroupIdByItemContainerId(const UObject* WorldContextObject, const FPalContainerId& ContainerId) {
    return FGuid{};
}

UPalItemContainer* UPalItemContainerManager::GetContainer(const FPalContainerId& ContainerId) const {
    return NULL;
}


