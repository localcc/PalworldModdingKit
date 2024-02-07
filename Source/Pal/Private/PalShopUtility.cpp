#include "PalShopUtility.h"

UPalShopUtility::UPalShopUtility() {
}

void UPalShopUtility::LotteryItemShop(const UObject* WorldContextObject, const FName& ItemShopLotteryName, FName& OutShopName) {
}

bool UPalShopUtility::GetPalShopCreateData(const UObject* WorldContextObject, const FName& ShopName, FPalPalShopCreateDataRow& OutData) {
    return false;
}

bool UPalShopUtility::GetItemShopCreateData(const UObject* WorldContextObject, const FName& ShopName, FPalItemShopCreateDataRow& OutData) {
    return false;
}

bool UPalShopUtility::CreateNewPalShop(const UObject* WorldContextObject, const FPalPalShopCreateDataRow& createShopData, const FName& sharedShopKeyName, UPalShopBase*& outCreatedShop) {
    return false;
}

bool UPalShopUtility::CreateNewItemShop(const UObject* WorldContextObject, const FPalItemShopCreateDataRow& createShopData, const FName& sharedShopKeyName, UPalShopBase*& outCreatedShop) {
    return false;
}

bool UPalShopUtility::CanSellFromStaticItemIDAndNum(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& staticItemIDAndNum, float SellRate) {
    return false;
}

bool UPalShopUtility::CanSellFromSlotIdAndNum(const UObject* WorldContextObject, const FPalItemSlotIdAndNum& SlotIdAndNum, float SellRate) {
    return false;
}

int32 UPalShopUtility::CalcPalSellPrice(const UObject* WorldContextObject, const FPalIndividualCharacterSaveParameter& SaveParameter, float SellRate) {
    return 0;
}

int32 UPalShopUtility::CalcItemSellPrice(const UObject* WorldContextObject, const FPalStaticItemIdAndNum& staticItemIDAndNum, float SellRate) {
    return 0;
}


