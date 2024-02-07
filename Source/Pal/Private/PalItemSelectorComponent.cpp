#include "PalItemSelectorComponent.h"

UPalItemSelectorComponent::UPalItemSelectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalItemSelectorComponent::SelectPrevItem(EPalPlayerInventoryType targetInventory) {
}

void UPalItemSelectorComponent::SelectNextItem(EPalPlayerInventoryType targetInventory) {
}

void UPalItemSelectorComponent::SelectItem(EPalPlayerInventoryType targetInventory, int32 Index) {
}

bool UPalItemSelectorComponent::RemoveTargetInventoryType(EPalPlayerInventoryType targetInventoryType) {
    return false;
}

UPalItemSlot* UPalItemSelectorComponent::GetNowSelectedItemSlot(EPalPlayerInventoryType targetInventory) const {
    return NULL;
}

int32 UPalItemSelectorComponent::GetNowSelectedIndex(EPalPlayerInventoryType targetInventory) const {
    return 0;
}

UPalItemContainer* UPalItemSelectorComponent::GetContainer(EPalPlayerInventoryType targetInventory) const {
    return NULL;
}

bool UPalItemSelectorComponent::AddTargetInventoryType(EPalPlayerInventoryType targetInventoryType) {
    return false;
}


