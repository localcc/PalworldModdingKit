#include "PalUIInventoryModel.h"

UPalUIInventoryModel::UPalUIInventoryModel() {
    this->InventoryContainers = NULL;
}

void UPalUIInventoryModel::TryMoveSlotToInventory(UPalItemSlot* fromSlot, bool tryAutoEquip) {
}

void UPalUIInventoryModel::TryMoveContainerToInventory(UPalItemContainer* fromContainer, bool tryAutoEquip) {
}

bool UPalUIInventoryModel::TryGetInventoryContainer(const EPalPlayerInventoryType Type, UPalItemContainer*& Container) const {
    return false;
}

void UPalUIInventoryModel::TryFillSlotToTargetContainerFromInventory(const FPalContainerId& ToContainerId) {
}

void UPalUIInventoryModel::TryFillSlotToInventoryFromTargetContainer(const FPalContainerId& FromContainerId) {
}

void UPalUIInventoryModel::TrashLiftUpItem() {
}

void UPalUIInventoryModel::Setup() {
}

void UPalUIInventoryModel::SelectItemSlot(const FPalItemSlotId SlotID, const EPalItemSlotPressType PressType) {
}

void UPalUIInventoryModel::ResetLiftItem() {
}

void UPalUIInventoryModel::RequestSortInventory() {
}

void UPalUIInventoryModel::OnUpdateContainerContent(UPalItemContainer* Container) {
}

void UPalUIInventoryModel::OnFinishedTrashItemDialog(bool Result) {
}

void UPalUIInventoryModel::OnFinishedTrashItemAlert(bool Result) {
}

void UPalUIInventoryModel::OnFinishedDropItem(bool Result) {
}

bool UPalUIInventoryModel::IsExistItems(TArray<FPalStaticItemIdAndNum> RequiredItems) {
    return false;
}

void UPalUIInventoryModel::DropLiftUpItem() {
}

void UPalUIInventoryModel::Dispose() {
}

bool UPalUIInventoryModel::CheckLiftItemTypeB(EPalItemTypeB checkType) {
    return false;
}

bool UPalUIInventoryModel::CheckLiftItemTypeA(EPalItemTypeA checkType) {
    return false;
}


