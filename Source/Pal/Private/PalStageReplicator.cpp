#include "PalStageReplicator.h"
#include "Net/UnrealNetwork.h"

UPalStageReplicator::UPalStageReplicator() {
}

void UPalStageReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageReplicator, RepInfoArray);
}


