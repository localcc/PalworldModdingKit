#include "PalItemIDManager.h"

UPalItemIDManager::UPalItemIDManager() {
    this->StaticItemDataAsset = NULL;
    this->StaticItemDataTable = NULL;
}


UPalStaticItemDataBase* UPalItemIDManager::GetStaticItemData(const FName StaticItemId) const {
    return NULL;
}

FPalItemData UPalItemIDManager::GetItemData(const FPalItemId& ItemId) const {
    return FPalItemData{};
}


