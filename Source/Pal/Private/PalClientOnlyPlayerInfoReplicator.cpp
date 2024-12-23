#include "PalClientOnlyPlayerInfoReplicator.h"
#include "Net/UnrealNetwork.h"

UPalClientOnlyPlayerInfoReplicator::UPalClientOnlyPlayerInfoReplicator() {
}

void UPalClientOnlyPlayerInfoReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalClientOnlyPlayerInfoReplicator, RepPlayerPlatformInfoArray);
}


