#include "PalMapObjectPickableCharacterModelBase.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectPickableCharacterModelBase::UPalMapObjectPickableCharacterModelBase() {
}

void UPalMapObjectPickableCharacterModelBase::RequestPickup_ServerInternal(const int32 RequestPlayerId) {
}

void UPalMapObjectPickableCharacterModelBase::RequestPickup() {
}

void UPalMapObjectPickableCharacterModelBase::OnRemovedStoredCharacter_ServerInternal(const FPalCharacterStoredParameterId& RemovedID) {
}

FDateTime UPalMapObjectPickableCharacterModelBase::GetCreatedAtRealTime() const {
    return FDateTime{};
}

FPalIndividualCharacterSaveParameter UPalMapObjectPickableCharacterModelBase::GetCharacterSaveParameter() const {
    return FPalIndividualCharacterSaveParameter{};
}

void UPalMapObjectPickableCharacterModelBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectPickableCharacterModelBase, ForRead_StoredParameter);
    DOREPLIFETIME(UPalMapObjectPickableCharacterModelBase, LocationId);
    DOREPLIFETIME(UPalMapObjectPickableCharacterModelBase, CreatedAtRealTime);
    DOREPLIFETIME(UPalMapObjectPickableCharacterModelBase, PickupablePlayerUid);
}


