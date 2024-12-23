#include "PalShopProductGiver_StaticItem.h"
#include "Net/UnrealNetwork.h"

UPalShopProductGiver_StaticItem::UPalShopProductGiver_StaticItem() {
    this->OverridePrice = 0;
    this->StackNumPerProduct = 0;
}

void UPalShopProductGiver_StaticItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProductGiver_StaticItem, ProductStaticItemID);
    DOREPLIFETIME(UPalShopProductGiver_StaticItem, OverridePrice);
    DOREPLIFETIME(UPalShopProductGiver_StaticItem, StackNumPerProduct);
}


