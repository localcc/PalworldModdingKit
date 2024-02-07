#include "PalGroupBase.h"
#include "Net/UnrealNetwork.h"

UPalGroupBase::UPalGroupBase() {
}

void UPalGroupBase::OnUpdateIndividualActor(UPalIndividualCharacterHandle* CharacterHandle) {
}

void UPalGroupBase::OnRep_GroupName() {
}

FGuid UPalGroupBase::GetId() const {
    return FGuid{};
}

FString UPalGroupBase::GetGroupName() const {
    return TEXT("");
}

void UPalGroupBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalGroupBase, ID);
    DOREPLIFETIME(UPalGroupBase, GroupName);
    DOREPLIFETIME(UPalGroupBase, IndividualCharacterHandleIds);
}


