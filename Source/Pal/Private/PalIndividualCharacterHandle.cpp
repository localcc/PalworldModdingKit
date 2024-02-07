#include "PalIndividualCharacterHandle.h"

UPalIndividualCharacterHandle::UPalIndividualCharacterHandle() {
}

APalCharacter* UPalIndividualCharacterHandle::TryGetPhantomActor(int32 PhantomId) const {
    return NULL;
}

UPalIndividualCharacterParameter* UPalIndividualCharacterHandle::TryGetIndividualParameter() const {
    return NULL;
}

APalCharacter* UPalIndividualCharacterHandle::TryGetIndividualActor() const {
    return NULL;
}

int32 UPalIndividualCharacterHandle::GetPhantomIDByActor(APalCharacter* Character) const {
    return 0;
}

FPalInstanceID UPalIndividualCharacterHandle::GetIndividualID() const {
    return FPalInstanceID{};
}


