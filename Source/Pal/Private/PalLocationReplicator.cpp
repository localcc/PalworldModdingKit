#include "PalLocationReplicator.h"
#include "Net/UnrealNetwork.h"

UPalLocationReplicator::UPalLocationReplicator() {
}

void UPalLocationReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationReplicator, RepInfoArray);
}


