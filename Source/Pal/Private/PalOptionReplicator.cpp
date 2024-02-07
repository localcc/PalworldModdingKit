#include "PalOptionReplicator.h"
#include "Net/UnrealNetwork.h"

UPalOptionReplicator::UPalOptionReplicator() {
}

void UPalOptionReplicator::OnRep_OptionWorldSettings() {
}

void UPalOptionReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalOptionReplicator, OptionWorldSettings);
}


