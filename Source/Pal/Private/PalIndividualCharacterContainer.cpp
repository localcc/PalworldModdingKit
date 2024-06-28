#include "PalIndividualCharacterContainer.h"
#include "Net/UnrealNetwork.h"

UPalIndividualCharacterContainer::UPalIndividualCharacterContainer() {
    this->bCanSetFavorite = true;
}

void UPalIndividualCharacterContainer::OnRep_Slots() {
}

int32 UPalIndividualCharacterContainer::Num() const {
    return 0;
}

TArray<UPalIndividualCharacterSlot*> UPalIndividualCharacterContainer::GetSlots() const {
    return TArray<UPalIndividualCharacterSlot*>();
}

UPalIndividualCharacterSlot* UPalIndividualCharacterContainer::Get(const int32 Index) const {
    return NULL;
}

UPalIndividualCharacterSlot* UPalIndividualCharacterContainer::FindEmptySlot() const {
    return NULL;
}

UPalIndividualCharacterSlot* UPalIndividualCharacterContainer::FindByHandle(UPalIndividualCharacterHandle* Handle) const {
    return NULL;
}

void UPalIndividualCharacterContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalIndividualCharacterContainer, SlotArray);
    DOREPLIFETIME(UPalIndividualCharacterContainer, bCanSetFavorite);
}


