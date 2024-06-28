#include "PalBaseCampWorkCollection.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampWorkCollection::UPalBaseCampWorkCollection() {
    this->ReplicationList = NULL;
}

void UPalBaseCampWorkCollection::OnUnassignWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalBaseCampWorkCollection::OnRequiredAssign_ServerInternal(UPalWorkBase* Work, const FPalWorkAssignRequirementParameter& RequirementParameter) {
}

void UPalBaseCampWorkCollection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampWorkCollection, GroupedWorks);
    DOREPLIFETIME(UPalBaseCampWorkCollection, ReplicationList);
}


