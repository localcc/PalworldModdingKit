#include "PalPlayerDataStorage.h"

UPalPlayerDataStorage::UPalPlayerDataStorage() {
}

UPalPlayerDataPalStorage* UPalPlayerDataStorage::GetPalStorage() const {
    return NULL;
}

void UPalPlayerDataStorage::GetInventoryInfo(FPalPlayerDataInventoryInfo& outInventoryInfo) const {
}

UPalItemContainerMultiHelper* UPalPlayerDataStorage::GetInventoryContainers() {
    return NULL;
}


