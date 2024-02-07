#include "PalUIPalShopBase.h"

UPalUIPalShopBase::UPalUIPalShopBase() {
}

void UPalUIPalShopBase::UpdateLocalLostPalProduct() {
}

bool UPalUIPalShopBase::TrySell(const TArray<UPalIndividualCharacterSlot*> SellPalSlots) {
    return false;
}

bool UPalUIPalShopBase::TryBuy(const FGuid& buyProductID) {
    return false;
}

void UPalUIPalShopBase::RequestCollectLocalLostPalData() {
}

bool UPalUIPalShopBase::GetPalStorageSlots(UPalIndividualCharacterContainer*& OutContainer) {
    return false;
}

bool UPalUIPalShopBase::GetMyShop(UPalShopBase*& OutShop) const {
    return false;
}


