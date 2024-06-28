#include "PalShopProduct_PalSaveParameter.h"
#include "Net/UnrealNetwork.h"

UPalShopProduct_PalSaveParameter::UPalShopProduct_PalSaveParameter() {
}

void UPalShopProduct_PalSaveParameter::OnCreatedBuyPal(FPalInstanceID CreatedPalInstanceID) {
}

void UPalShopProduct_PalSaveParameter::GetProductPalParameter(FPalIndividualCharacterSaveParameter& outParameter) const {
}

int32 UPalShopProduct_PalSaveParameter::GetPrice(const FGuid& PlayerUId) const {
    return 0;
}

void UPalShopProduct_PalSaveParameter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalShopProduct_PalSaveParameter, ProductPalSaveParameter);
}


