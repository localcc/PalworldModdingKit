#include "PalBaseCampReplicator.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampReplicator::UPalBaseCampReplicator() {
}

void UPalBaseCampReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampReplicator, RepInfoArray);
}


