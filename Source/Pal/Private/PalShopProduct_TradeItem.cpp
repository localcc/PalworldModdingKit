#include "PalShopProduct_TradeItem.h"
#include "Net/UnrealNetwork.h"

UPalShopProduct_TradeItem::UPalShopProduct_TradeItem() {
    this->BuyRate = 0.00f;
}

int32 UPalShopProduct_TradeItem::GetRequireMoney() const {
    return 0;
}

void UPalShopProduct_TradeItem::GetProductStaticItemID(FName& OutStaticID) const {
}

void UPalShopProduct_TradeItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProduct_TradeItem, ProductStaticItemID);
    DOREPLIFETIME(UPalShopProduct_TradeItem, BuyRate);
}


