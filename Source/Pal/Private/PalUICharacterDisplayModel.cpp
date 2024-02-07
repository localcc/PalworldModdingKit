#include "PalUICharacterDisplayModel.h"

UPalUICharacterDisplayModel::UPalUICharacterDisplayModel() {
}

bool UPalUICharacterDisplayModel::IsSelectable(const int32 DisplayIndex) {
    return false;
}

int32 UPalUICharacterDisplayModel::GetSlotCount() const {
    return 0;
}

void UPalUICharacterDisplayModel::GetDisplaySlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const {
}


