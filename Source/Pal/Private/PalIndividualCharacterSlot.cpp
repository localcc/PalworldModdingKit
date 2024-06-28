#include "PalIndividualCharacterSlot.h"
#include "Net/UnrealNetwork.h"

UPalIndividualCharacterSlot::UPalIndividualCharacterSlot() {
    this->Handle = NULL;
    this->SlotIndex = -1;
    this->PermissionTribeID = EPalTribeID::None;
    this->bIsReplicateCharacterParameter = true;
}

void UPalIndividualCharacterSlot::Setup(const int32 InSlotIndex, const FPalContainerId& InContainerId) {
}

void UPalIndividualCharacterSlot::OnRep_LockPlayerUId() {
}

void UPalIndividualCharacterSlot::OnRep_HandleID() {
}

bool UPalIndividualCharacterSlot::IsLocked() const {
    return false;
}

bool UPalIndividualCharacterSlot::IsEmpty() const {
    return false;
}

int32 UPalIndividualCharacterSlot::GetSlotIndex() const {
    return 0;
}

FPalCharacterSlotId UPalIndividualCharacterSlot::GetSlotId() const {
    return FPalCharacterSlotId{};
}

FGuid UPalIndividualCharacterSlot::GetLockPlayerUId() const {
    return FGuid{};
}

UPalIndividualCharacterHandle* UPalIndividualCharacterSlot::GetHandle() const {
    return NULL;
}

void UPalIndividualCharacterSlot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalIndividualCharacterSlot, ReplicateHandleID);
    DOREPLIFETIME(UPalIndividualCharacterSlot, ContainerId);
    DOREPLIFETIME(UPalIndividualCharacterSlot, SlotIndex);
    DOREPLIFETIME(UPalIndividualCharacterSlot, LockPlayerUId);
    DOREPLIFETIME(UPalIndividualCharacterSlot, PermissionTribeID);
}


