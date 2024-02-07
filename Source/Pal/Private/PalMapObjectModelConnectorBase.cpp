#include "PalMapObjectModelConnectorBase.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorBase::UPalMapObjectModelConnectorBase() {
    this->SupportedLevel = -1;
}

void UPalMapObjectModelConnectorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorBase, SupportedLevel);
}


