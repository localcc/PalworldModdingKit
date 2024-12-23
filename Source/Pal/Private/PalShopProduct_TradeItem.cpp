#include "PalShopProduct_TradeItem.h"

UPalShopProduct_TradeItem::UPalShopProduct_TradeItem() {
}

int32 UPalShopProduct_TradeItem::GetStackNumPerProduct() const {
    return 0;
}

int32 UPalShopProduct_TradeItem::GetRequireItemNum(const FGuid& PlayerUId) const {
    return 0;
}

void UPalShopProduct_TradeItem::GetRequireItemName(FName& OutRequireItemName) const {
}

void UPalShopProduct_TradeItem::GetProductStaticItemID(FName& OutStaticID) const {
}


