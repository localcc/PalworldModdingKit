#include "PalMapObjectModelConnectorPillar.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorPillar::UPalMapObjectModelConnectorPillar() {
    this->bStuckInBackground = false;
}

void UPalMapObjectModelConnectorPillar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorPillar, UpConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorPillar, DownConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorPillar, bStuckInBackground);
}


