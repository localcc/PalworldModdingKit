#include "PalShopProductGiverBase.h"
#include "Net/UnrealNetwork.h"

UPalShopProductGiverBase::UPalShopProductGiverBase() {
    this->bIsInfinityStockFlag = false;
    this->StockNum = 0;
    this->MaxStockNum = 0;
}

void UPalShopProductGiverBase::OnRep_StockNum() {
}

void UPalShopProductGiverBase::OnRep_MaxStockNum() {
}

void UPalShopProductGiverBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProductGiverBase, bIsInfinityStockFlag);
    DOREPLIFETIME(UPalShopProductGiverBase, StockNum);
    DOREPLIFETIME(UPalShopProductGiverBase, MaxStockNum);
}


