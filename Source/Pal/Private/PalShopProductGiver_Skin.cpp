#include "PalShopProductGiver_Skin.h"
#include "Net/UnrealNetwork.h"

UPalShopProductGiver_Skin::UPalShopProductGiver_Skin() {
    this->Price = 0;
}

void UPalShopProductGiver_Skin::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProductGiver_Skin, SkinName);
    DOREPLIFETIME(UPalShopProductGiver_Skin, Price);
}


