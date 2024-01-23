#include "PalItemIDManager.h"


UPalStaticItemDataBase* UPalItemIDManager::GetStaticItemData(const FName StaticItemId) const {
    return NULL;
}

FPalItemData UPalItemIDManager::GetItemData(const FPalItemId& ItemId) const {
    return FPalItemData{};
}

UPalItemIDManager::UPalItemIDManager() {
    this->StaticItemDataAsset = NULL;
    this->StaticItemDataTable = NULL;
}

