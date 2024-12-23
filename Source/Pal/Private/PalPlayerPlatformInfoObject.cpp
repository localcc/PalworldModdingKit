#include "PalPlayerPlatformInfoObject.h"
#include "Net/UnrealNetwork.h"

UPalPlayerPlatformInfoObject::UPalPlayerPlatformInfoObject() {
    this->Platform = EPlayerPlatform::Null;
    this->IsListenServerHost = false;
}

void UPalPlayerPlatformInfoObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPlayerPlatformInfoObject, RequestGUID);
    DOREPLIFETIME(UPalPlayerPlatformInfoObject, PlayerId);
    DOREPLIFETIME(UPalPlayerPlatformInfoObject, Platform);
    DOREPLIFETIME(UPalPlayerPlatformInfoObject, AccountID);
    DOREPLIFETIME(UPalPlayerPlatformInfoObject, IsListenServerHost);
}


