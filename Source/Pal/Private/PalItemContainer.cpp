#include "PalItemContainer.h"
#include "Net/UnrealNetwork.h"

UPalItemContainer::UPalItemContainer() {
    this->CorruptionMultiplier = 1.00f;
}

void UPalItemContainer::OnUpdateSlotContent(UPalItemSlot* Slot) {
}

void UPalItemContainer::OnRep_Permission() {
}

void UPalItemContainer::OnRep_ItemSlotArray() {
}

void UPalItemContainer::OnRep_FilterPreference() {
}

int32 UPalItemContainer::Num() const {
    return 0;
}

FPalItemPermission UPalItemContainer::GetPermission() const {
    return FPalItemPermission{};
}

int32 UPalItemContainer::GetItemStackCount(const FName StaticItemId) const {
    return 0;
}

FPalItemContainerFilter UPalItemContainer::GetFilterPreference() const {
    return FPalItemContainerFilter{};
}

TArray<FName> UPalItemContainer::GetFilterOffList() const {
    return TArray<FName>();
}

UPalItemSlot* UPalItemContainer::Get(const int32 Index) const {
    return NULL;
}

void UPalItemContainer::ForceMarkSlotDirty_ServerInternal() {
}

void UPalItemContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalItemContainer, ItemSlotArray);
    DOREPLIFETIME(UPalItemContainer, Permission);
    DOREPLIFETIME(UPalItemContainer, CorruptionMultiplier);
    DOREPLIFETIME(UPalItemContainer, FilterPreference);
}


