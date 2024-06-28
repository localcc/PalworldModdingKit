#include "PalBaseCampWorkCollectionReplicationList.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampWorkCollectionReplicationList::UPalBaseCampWorkCollectionReplicationList() {
}

void UPalBaseCampWorkCollectionReplicationList::OnRep_RepInfoArray() {
}

void UPalBaseCampWorkCollectionReplicationList::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampWorkCollectionReplicationList, RepInfoArray);
}


