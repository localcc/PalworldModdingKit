#include "PalMapObjectModelConnectorFoundation.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelConnectorFoundation::UPalMapObjectModelConnectorFoundation() {
}

void UPalMapObjectModelConnectorFoundation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, FrontConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, BackConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, LeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, RightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, CornerFrontLeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, CornerFrontRightConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, CornerBackLeftConnectInfo);
    DOREPLIFETIME(UPalMapObjectModelConnectorFoundation, CornerBackRightConnectInfo);
}


