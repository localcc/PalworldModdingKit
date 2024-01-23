#include "PalMapObjectModelConnectorBase.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectModelConnectorBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorBase, SupportedLevel);
}

UPalMapObjectModelConnectorBase::UPalMapObjectModelConnectorBase() {
    this->SupportedLevel = -1;
}

