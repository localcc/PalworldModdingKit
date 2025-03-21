#include "PalPlayerDataPalStorage.h"
#include "Net/UnrealNetwork.h"

UPalPlayerDataPalStorage::UPalPlayerDataPalStorage() {
    this->PageNum = 0;
    this->SlotNumInPage = 0;
    this->TargetContainer = NULL;
    this->SlotObserver = NULL;
    this->SyncPageIndex = -1;
    this->bIsForceSyncAllSlot = false;
    this->PalDimensionStorage = NULL;
}

void UPalPlayerDataPalStorage::OnUpdateCharacterContainer_InServer() {
}

void UPalPlayerDataPalStorage::OnRep_TargetContainer() {
}

void UPalPlayerDataPalStorage::GetSlotsInPage(const int32 pageIndex, TArray<UPalIndividualCharacterSlot*>& Slots) const {
}

UPalIndividualCharacterSlot* UPalPlayerDataPalStorage::GetSlotBySlotIndex(const int32 SlotIndex) const {
    return NULL;
}

UPalIndividualCharacterSlot* UPalPlayerDataPalStorage::GetSlot(const int32 pageIndex, const int32 SlotIndex) const {
    return NULL;
}

int32 UPalPlayerDataPalStorage::GetPageNum() const {
    return 0;
}

UPalPlayerDataPalDimensionStorage* UPalPlayerDataPalStorage::GetDimensionStorage() const {
    return NULL;
}

void UPalPlayerDataPalStorage::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerDataPalStorage, PageNum);
    DOREPLIFETIME(UPalPlayerDataPalStorage, SlotNumInPage);
    DOREPLIFETIME(UPalPlayerDataPalStorage, TargetContainer);
    DOREPLIFETIME(UPalPlayerDataPalStorage, OwnerPlayerUId);
    DOREPLIFETIME(UPalPlayerDataPalStorage, PalDimensionStorage);
}


