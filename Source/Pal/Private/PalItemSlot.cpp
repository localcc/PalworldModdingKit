#include "PalItemSlot.h"
#include "Net/UnrealNetwork.h"

UPalItemSlot::UPalItemSlot() {
    this->SlotIndex = -1;
    this->StackCount = 0;
    this->CorruptionProgressValue = 0.00f;
}

bool UPalItemSlot::TryGetStaticItemData(UPalStaticItemDataBase*& OutStaticItemData) const {
    return false;
}

bool UPalItemSlot::TryGetDynamicItemData(UPalDynamicItemDataBase*& OutDynamicItemData) {
    return false;
}

void UPalItemSlot::RequestUseToCharacter(const FPalInstanceID& TargetCharacterID, int32 UseNum) {
}

void UPalItemSlot::OnUpdateSlotContentDurability(float OldDurability, float NewDurability) {
}

void UPalItemSlot::OnRep_StackCount() {
}

void UPalItemSlot::OnRep_Permission() {
}

void UPalItemSlot::OnRep_ItemId() {
}

void UPalItemSlot::OnRep_DynamicItemData() {
}

void UPalItemSlot::OnRep_CorruptionProgressValue() {
}

bool UPalItemSlot::IsMaxStack() const {
    return false;
}

bool UPalItemSlot::IsEmpty() const {
    return false;
}

int32 UPalItemSlot::GetStackCount() const {
    return 0;
}

FPalItemSlotId UPalItemSlot::GetSlotId() const {
    return FPalItemSlotId{};
}

FPalItemPermission UPalItemSlot::GetPermission() const {
    return FPalItemPermission{};
}

int32 UPalItemSlot::GetMaxStack() const {
    return 0;
}

FPalItemId UPalItemSlot::GetItemId() const {
    return FPalItemId{};
}

FText UPalItemSlot::GetCorruptionRemainTimeText() const {
    return FText::GetEmpty();
}

float UPalItemSlot::GetCorruptionProgressRate() const {
    return 0.0f;
}

bool UPalItemSlot::CanUseItemToCharacter(const FPalInstanceID& TargetCharacterID) {
    return false;
}

void UPalItemSlot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalItemSlot, SlotIndex);
    DOREPLIFETIME(UPalItemSlot, ContainerId);
    DOREPLIFETIME(UPalItemSlot, ItemId);
    DOREPLIFETIME(UPalItemSlot, StackCount);
    DOREPLIFETIME(UPalItemSlot, CorruptionProgressValue);
    DOREPLIFETIME(UPalItemSlot, Permission);
    DOREPLIFETIME(UPalItemSlot, DynamicItemData);
}


