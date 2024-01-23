#include "PalPlayerDataStorage.h"

UPalPlayerDataPalStorage* UPalPlayerDataStorage::GetPalStorage() const {
    return NULL;
}

void UPalPlayerDataStorage::GetInventoryInfo(FPalPlayerDataInventoryInfo& outInventoryInfo) const {
}

UPalItemContainerMultiHelper* UPalPlayerDataStorage::GetInventoryContainers() {
    return NULL;
}

UPalPlayerDataStorage::UPalPlayerDataStorage() {
}

