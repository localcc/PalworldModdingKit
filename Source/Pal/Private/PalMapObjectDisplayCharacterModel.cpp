#include "PalMapObjectDisplayCharacterModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectDisplayCharacterModel::UPalMapObjectDisplayCharacterModel() {
    this->RecoverAmountBySec = 0.00f;
    this->ControllerClass = NULL;
    this->MenuUIWidgetClass = NULL;
    this->CharacterSlotsObserver = NULL;
}

void UPalMapObjectDisplayCharacterModel::TryMoveToDisplayCage(UPalIndividualCharacterSlot* fromSlot) {
}

void UPalMapObjectDisplayCharacterModel::OnUpdateCharacterContainer_ServerInternal() {
}

void UPalMapObjectDisplayCharacterModel::OnSpawnedPhantomCharacter_ServerInternal(FPalInstanceID IndividualId, const int32 PhantomId) {
}

bool UPalMapObjectDisplayCharacterModel::GetDisplaySlots(TArray<UPalIndividualCharacterSlot*>& Slots) {
    return false;
}

void UPalMapObjectDisplayCharacterModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectDisplayCharacterModel, MenuUIWidgetClass);
}


