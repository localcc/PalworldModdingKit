#include "PalGroupIndividualCharacterHandleIdArray.h"
#include "Net/UnrealNetwork.h"

UPalGroupIndividualCharacterHandleIdArray::UPalGroupIndividualCharacterHandleIdArray() {
}

void UPalGroupIndividualCharacterHandleIdArray::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGroupIndividualCharacterHandleIdArray, IndividualCharacterHandleIds);
}


