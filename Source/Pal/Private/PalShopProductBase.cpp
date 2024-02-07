#include "PalShopProductBase.h"
#include "Net/UnrealNetwork.h"

UPalShopProductBase::UPalShopProductBase() {
    this->IsInfinityStockFlag = false;
    this->StockNum = 0;
    this->MaxStockNum = 0;
    this->IsValidProductFlag = true;
}

void UPalShopProductBase::OnRep_StockNum() {
}

void UPalShopProductBase::OnRep_MaxStockNum() {
}

bool UPalShopProductBase::IsValidProduct() {
    return false;
}

bool UPalShopProductBase::IsSoldout() const {
    return false;
}

bool UPalShopProductBase::IsInfinityStock() const {
    return false;
}

int32 UPalShopProductBase::GetRemainStockNum() const {
    return 0;
}

void UPalShopProductBase::GetProductNameText(FText& OutText) const {
}

int32 UPalShopProductBase::GetMaxStockNum() const {
    return 0;
}

int32 UPalShopProductBase::GetMaxBuyNum_LocalPlayer() const {
    return 0;
}

void UPalShopProductBase::GetId(FGuid& OutID) {
}

bool UPalShopProductBase::CanBuy_LocalPlayer() const {
    return false;
}

void UPalShopProductBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProductBase, MyProductID);
    DOREPLIFETIME(UPalShopProductBase, IsInfinityStockFlag);
    DOREPLIFETIME(UPalShopProductBase, StockNum);
    DOREPLIFETIME(UPalShopProductBase, MaxStockNum);
    DOREPLIFETIME(UPalShopProductBase, IsValidProductFlag);
}


