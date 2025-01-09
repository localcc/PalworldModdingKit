#include "PalShopProductBase.h"
#include "Net/UnrealNetwork.h"

UPalShopProductBase::UPalShopProductBase() {
    this->IsValidProductFlag = true;
    this->MyProductCostTaker = NULL;
    this->MyProductGiver = NULL;
}

void UPalShopProductBase::OnUpdateProductStock(int32 NowStock) {
}

void UPalShopProductBase::OnUpdateProductMaxStock(int32 MaxStock) {
}

void UPalShopProductBase::OnRep_MyProductGiver() {
}

void UPalShopProductBase::OnRep_MyProductCostTaker() {
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
    DOREPLIFETIME(UPalShopProductBase, IsValidProductFlag);
    DOREPLIFETIME(UPalShopProductBase, MyProductCostTaker);
    DOREPLIFETIME(UPalShopProductBase, MyProductGiver);
}


