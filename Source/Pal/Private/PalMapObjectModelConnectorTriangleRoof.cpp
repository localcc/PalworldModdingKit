#include "PalMapObjectModelConnectorTriangleRoof.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorTriangleRoof::UPalMapObjectModelConnectorTriangleRoof() {
}

void UPalMapObjectModelConnectorTriangleRoof::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleRoof, FrontConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleRoof, RightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleRoof, CornerFrontRightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleRoof, CornerBackRightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleRoof, CornerFrontLeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorTriangleRoof, DiagonalConnectInfo);
}


