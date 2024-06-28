#include "PalShopProduct_TradeItem.h"
#include "Net/UnrealNetwork.h"

UPalShopProduct_TradeItem::UPalShopProduct_TradeItem() {
    this->BuyRate = 0.00f;
    this->OverridePrice = 0;
}

int32 UPalShopProduct_TradeItem::GetRequireItemNum(const FGuid& PlayerUId) const {
    return 0;
}

void UPalShopProduct_TradeItem::GetRequireItemName(FName& OutRequireItemName) const {
}

void UPalShopProduct_TradeItem::GetProductStaticItemID(FName& OutStaticID) const {
}

void UPalShopProduct_TradeItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProduct_TradeItem, ProductStaticItemID);
    DOREPLIFETIME(UPalShopProduct_TradeItem, BuyRate);
    DOREPLIFETIME(UPalShopProduct_TradeItem, OverridePrice);
    DOREPLIFETIME(UPalShopProduct_TradeItem, RequireStaticItemID);
}


