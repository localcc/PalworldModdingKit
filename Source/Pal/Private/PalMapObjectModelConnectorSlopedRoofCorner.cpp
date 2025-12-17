#include "PalMapObjectModelConnectorSlopedRoofCorner.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorSlopedRoofCorner::UPalMapObjectModelConnectorSlopedRoofCorner() {
}

void UPalMapObjectModelConnectorSlopedRoofCorner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorSlopedRoofCorner, DiagonalDownConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorSlopedRoofCorner, DiagonalLeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorSlopedRoofCorner, DiagonalBackConnectInfo);
}


