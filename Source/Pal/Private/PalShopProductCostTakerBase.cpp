#include "PalShopProductCostTakerBase.h"
#include "Net/UnrealNetwork.h"

UPalShopProductCostTakerBase::UPalShopProductCostTakerBase() {
}

void UPalShopProductCostTakerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProductCostTakerBase, ParentProduct);
}


