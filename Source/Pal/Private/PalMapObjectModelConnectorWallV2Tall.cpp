#include "PalMapObjectModelConnectorWallV2Tall.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorWallV2Tall::UPalMapObjectModelConnectorWallV2Tall() {
}

void UPalMapObjectModelConnectorWallV2Tall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorWallV2Tall, UpConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorWallV2Tall, DownConnectInfo);
}


