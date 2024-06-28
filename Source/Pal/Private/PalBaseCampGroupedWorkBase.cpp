#include "PalBaseCampGroupedWorkBase.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampGroupedWorkBase::UPalBaseCampGroupedWorkBase() {
}

void UPalBaseCampGroupedWorkBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampGroupedWorkBase, WorkIds);
}


