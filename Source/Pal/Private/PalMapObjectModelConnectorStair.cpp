#include "PalMapObjectModelConnectorStair.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorStair::UPalMapObjectModelConnectorStair() {
}

void UPalMapObjectModelConnectorStair::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorStair, UpConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorStair, DownConnectInfo);
}


