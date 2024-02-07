#include "PalShopBase.h"
#include "Net/UnrealNetwork.h"

UPalShopBase::UPalShopBase() {
}

void UPalShopBase::OnUpdateAnyProductStock(int32 NowStock) {
}

void UPalShopBase::OnUpdateAnyProductMaxStock(int32 MaxStock) {
}

void UPalShopBase::OnTimerTrigger_Restock() {
}

void UPalShopBase::OnRep_ProductArray() {
}

void UPalShopBase::OnRep_MyShopName() {
}

void UPalShopBase::GetId(FGuid& OutID) const {
}

void UPalShopBase::GetAllProduct(TArray<UPalShopProductBase*>& OutProductArray) const {
}

void UPalShopBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopBase, MyShopID);
    DOREPLIFETIME(UPalShopBase, MyShopName);
    DOREPLIFETIME(UPalShopBase, ProductArray);
}


