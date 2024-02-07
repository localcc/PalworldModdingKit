#include "PalPlayerDataPalStorage.h"
#include "Net/UnrealNetwork.h"

UPalPlayerDataPalStorage::UPalPlayerDataPalStorage() {
    this->PageNum = 0;
    this->SlotNumInPage = 0;
    this->TargetContainer = NULL;
    this->SlotObserver = NULL;
    this->IsOpen = false;
}

void UPalPlayerDataPalStorage::OnUpdateCharacterContainer_InServer() {
}

void UPalPlayerDataPalStorage::OnRep_TargetContainer() {
}

void UPalPlayerDataPalStorage::GetSlotsInPage(const int32 PageIndex, TArray<UPalIndividualCharacterSlot*>& Slots) const {
}

UPalIndividualCharacterSlot* UPalPlayerDataPalStorage::GetSlot(const int32 PageIndex, const int32 SlotIndex) const {
    return NULL;
}

void UPalPlayerDataPalStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerDataPalStorage, PageNum);
    DOREPLIFETIME(UPalPlayerDataPalStorage, SlotNumInPage);
    DOREPLIFETIME(UPalPlayerDataPalStorage, TargetContainer);
    DOREPLIFETIME(UPalPlayerDataPalStorage, OwnerPlayerUId);
}


