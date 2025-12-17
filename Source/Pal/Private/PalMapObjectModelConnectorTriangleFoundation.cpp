#include "PalMapObjectModelConnectorTriangleFoundation.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorTriangleFoundation::UPalMapObjectModelConnectorTriangleFoundation() {
}

void UPalMapObjectModelConnectorTriangleFoundation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleFoundation, FrontConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleFoundation, RightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleFoundation, CornerFrontRightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleFoundation, CornerBackRightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleFoundation, CornerFrontLeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleFoundation, DiagonalConnectInfo);
}


