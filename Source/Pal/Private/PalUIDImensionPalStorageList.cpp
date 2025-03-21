#include "PalUIDImensionPalStorageList.h"

UPalUIDImensionPalStorageList::UPalUIDImensionPalStorageList() {
    this->LocalDPSContainer = NULL;
}

void UPalUIDImensionPalStorageList::Setup(const FGuid& OpenLockerConcreteModelInstanceId) {
}

void UPalUIDImensionPalStorageList::RequestUpdatePage(int32 NewPageNum) {
}

void UPalUIDImensionPalStorageList::RefreshPage() {
}

void UPalUIDImensionPalStorageList::OnUpdatePageData(const TArray<FPalDimensionPalStorageSaveParameter>& NewPageData) {
}



void UPalUIDImensionPalStorageList::OnUpdateCurrentPageNum(int32 NewPageNum) {
}

void UPalUIDImensionPalStorageList::OnSortedLocker() {
}

bool UPalUIDImensionPalStorageList::GetSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const {
    return false;
}

bool UPalUIDImensionPalStorageList::GetDPSContainerId(FPalContainerId& OutID) const {
    return false;
}


