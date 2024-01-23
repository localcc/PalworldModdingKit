#include "PalMapObjectModelConnectorWallV2.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectModelConnectorWallV2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorWallV2, UpConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorWallV2, DownConnectInfo);
}

UPalMapObjectModelConnectorWallV2::UPalMapObjectModelConnectorWallV2() {
}

