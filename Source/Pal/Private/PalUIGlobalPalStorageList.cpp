#include "PalUIGlobalPalStorageList.h"

UPalUIGlobalPalStorageList::UPalUIGlobalPalStorageList() {
    this->LocalGPSContainer = NULL;
    this->bAutoLoadGPSData = false;
}

void UPalUIGlobalPalStorageList::Setup() {
}

void UPalUIGlobalPalStorageList::RefreshSlot(const int32 SlotIndex) {
}

void UPalUIGlobalPalStorageList::RefreshPage(const int32 PageNum) {
}

void UPalUIGlobalPalStorageList::RefreshAllPage() {
}

void UPalUIGlobalPalStorageList::ReflectContainerToGPSData() {
}


int32 UPalUIGlobalPalStorageList::GetMaxPageNum() const {
    return 0;
}

bool UPalUIGlobalPalStorageList::GetGPSContainerId(FPalContainerId& OutID) const {
    return false;
}

bool UPalUIGlobalPalStorageList::GetDummyPageSlots(const int32 PageNum, TArray<UPalIndividualCharacterSlot*>& OutSlots) const {
    return false;
}


