#include "PalVenderDataComponent.h"
#include "Net/UnrealNetwork.h"

UPalVenderDataComponent::UPalVenderDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemShopRestockMinute = 10;
    this->itemShopLotteryType = EPalShopLotteryType::None;
    this->PalShopRestockMinute = 10;
    this->palShopLotteryType = EPalShopLotteryType::None;
    this->MyItemShop = NULL;
    this->MyPalShop = NULL;
}

bool UPalVenderDataComponent::TryGetPalShop(UPalShopBase*& OutShop) const {
    return false;
}

bool UPalVenderDataComponent::TryGetItemShop(UPalShopBase*& OutShop) const {
    return false;
}

void UPalVenderDataComponent::SetupShopData() {
}

void UPalVenderDataComponent::OnRep_MyPalShop() {
}

void UPalVenderDataComponent::OnRep_MyItemShop() {
}

bool UPalVenderDataComponent::IsValidPalShop() const {
    return false;
}

bool UPalVenderDataComponent::IsValidItemShop() const {
    return false;
}

void UPalVenderDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalVenderDataComponent, MyItemShop);
    DOREPLIFETIME(UPalVenderDataComponent, MyPalShop);
}


