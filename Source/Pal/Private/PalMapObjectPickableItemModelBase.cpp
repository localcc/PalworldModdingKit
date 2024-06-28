#include "PalMapObjectPickableItemModelBase.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectPickableItemModelBase::UPalMapObjectPickableItemModelBase() {
    this->bAutoPickedUp = false;
}

void UPalMapObjectPickableItemModelBase::RequestPickup_ServerInternal(const int32 RequestPlayerId, const bool bByAutoPickup) {
}

void UPalMapObjectPickableItemModelBase::RequestPickup(const bool bByAutoPickup) {
}

void UPalMapObjectPickableItemModelBase::OnTimer_RemovePickupGuard() {
}

TArray<FPalItemAndNum> UPalMapObjectPickableItemModelBase::CreatePickupItemInfo() const {
    return TArray<FPalItemAndNum>();
}

void UPalMapObjectPickableItemModelBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPickableItemModelBase, bAutoPickedUp);
}


