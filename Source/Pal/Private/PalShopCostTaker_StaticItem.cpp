#include "PalShopCostTaker_StaticItem.h"
#include "Net/UnrealNetwork.h"

UPalShopCostTaker_StaticItem::UPalShopCostTaker_StaticItem() {
    this->ItemProductType = EPalItemShopProductType::Invalid;
}

void UPalShopCostTaker_StaticItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopCostTaker_StaticItem, ItemProductType);
    DOREPLIFETIME(UPalShopCostTaker_StaticItem, RequireStaticItemID);
    DOREPLIFETIME(UPalShopCostTaker_StaticItem, TargetProductStaticItemID);
}


