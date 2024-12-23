#include "PalGuildItemStorage.h"
#include "Net/UnrealNetwork.h"

UPalGuildItemStorage::UPalGuildItemStorage() {
    this->ItemContainer = NULL;
}

void UPalGuildItemStorage::OnRep_ItemContainer() {
}

void UPalGuildItemStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGuildItemStorage, ItemContainer);
}


