#include "PalUIItemShopBase.h"

UPalUIItemShopBase::UPalUIItemShopBase() {
}

bool UPalUIItemShopBase::TrySteal(const FGuid& BuyProductID, const int32 StealNum) {
    return false;
}

bool UPalUIItemShopBase::TrySell(const TArray<UPalItemSlot*>& SellItemSlots) {
    return false;
}

bool UPalUIItemShopBase::TryBuy(const FGuid& BuyProductID, const int32 BuyNum) {
    return false;
}

bool UPalUIItemShopBase::GetMyShop(UPalShopBase*& OutShop) const {
    return false;
}


