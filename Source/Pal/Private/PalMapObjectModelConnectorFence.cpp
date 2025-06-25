#include "PalMapObjectModelConnectorFence.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorFence::UPalMapObjectModelConnectorFence() {
}

void UPalMapObjectModelConnectorFence::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorFence, DownConnectInfo);
}


