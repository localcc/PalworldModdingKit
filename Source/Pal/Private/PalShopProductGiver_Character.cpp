#include "PalShopProductGiver_Character.h"
#include "Net/UnrealNetwork.h"

UPalShopProductGiver_Character::UPalShopProductGiver_Character() {
}

void UPalShopProductGiver_Character::OnCreatedBuyPal(FPalInstanceID CreatedPalInstanceID) {
}

void UPalShopProductGiver_Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProductGiver_Character, ProductPalSaveParameter);
}


