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

int32 UPalItemContainer::Num() const {
    return 0;
}

FPalItemPermission UPalItemContainer::GetPermission() const {
    return FPalItemPermission{};
}

int32 UPalItemContainer::GetItemStackCount(const FName StaticItemId) const {
    return 0;
}

UPalItemSlot* UPalItemContainer::Get(const int32 Index) const {
    return NULL;
}

void UPalItemContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalItemContainer, ItemSlotArray);
    DOREPLIFETIME(UPalItemContainer, Permission);
    DOREPLIFETIME(UPalItemContainer, CorruptionMultiplier);
}


