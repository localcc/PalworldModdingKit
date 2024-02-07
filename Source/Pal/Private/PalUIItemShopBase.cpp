#include "PalUIItemShopBase.h"

UPalUIItemShopBase::UPalUIItemShopBase() {
}

bool UPalUIItemShopBase::TrySteal(const FGuid& buyProductID, const int32 stealNum) {
    return false;
}

bool UPalUIItemShopBase::TrySell(const TArray<UPalItemSlot*>& SellItemSlots) {
    return false;
}

bool UPalUIItemShopBase::TryBuy(const FGuid& buyProductID, const int32 BuyNum) {
    return false;
}

bool UPalUIItemShopBase::GetMyShop(UPalShopBase*& OutShop) const {
    return false;
}


