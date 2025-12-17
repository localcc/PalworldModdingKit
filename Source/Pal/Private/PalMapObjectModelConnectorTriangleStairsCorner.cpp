#include "PalMapObjectModelConnectorTriangleStairsCorner.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorTriangleStairsCorner::UPalMapObjectModelConnectorTriangleStairsCorner() {
}

void UPalMapObjectModelConnectorTriangleStairsCorner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleStairsCorner, FrontConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleStairsCorner, RightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleStairsCorner, DiagonalLeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleStairsCorner, DiagonalBackConnectInfo);
}


