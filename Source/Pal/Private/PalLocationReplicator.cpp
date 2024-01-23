#include "PalLocationReplicator.h"
#include "Net/UnrealNetwork.h"

void UPalLocationReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationReplicator, RepInfoArray);
}

UPalLocationReplicator::UPalLocationReplicator() {
}

