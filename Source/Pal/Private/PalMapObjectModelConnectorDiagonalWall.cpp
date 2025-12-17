#include "PalMapObjectModelConnectorDiagonalWall.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorDiagonalWall::UPalMapObjectModelConnectorDiagonalWall() {
}

void UPalMapObjectModelConnectorDiagonalWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorDiagonalWall, DiagonalUpConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorDiagonalWall, DiagonalDownConnectInfo);
}


