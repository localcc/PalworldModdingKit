#include "PalStageReplicator.h"
#include "Net/UnrealNetwork.h"

void UPalStageReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageReplicator, RepInfoArray);
}

UPalStageReplicator::UPalStageReplicator() {
}

