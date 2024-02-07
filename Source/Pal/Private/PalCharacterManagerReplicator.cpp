#include "PalCharacterManagerReplicator.h"
#include "Net/UnrealNetwork.h"

UPalCharacterManagerReplicator::UPalCharacterManagerReplicator() {
}

void UPalCharacterManagerReplicator::OnPreReplicatedRemoveItem(const FCharacterParameterRepInfo& Item) {
}

void UPalCharacterManagerReplicator::OnPostReplicatedChangeItem(const FCharacterParameterRepInfo& Item) {
}

void UPalCharacterManagerReplicator::OnPostReplicatedAddItem(const FCharacterParameterRepInfo& Item) {
}

void UPalCharacterManagerReplicator::OnPep_CharacterParameterInfos() {
}

void UPalCharacterManagerReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalCharacterManagerReplicator, CharacterParameterInfosFast);
}


