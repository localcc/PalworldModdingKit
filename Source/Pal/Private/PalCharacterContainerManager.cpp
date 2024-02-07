#include "PalCharacterContainerManager.h"

UPalCharacterContainerManager::UPalCharacterContainerManager() {
}

bool UPalCharacterContainerManager::TryGetContainer(const FPalContainerId& ContainerId, UPalIndividualCharacterContainer*& Container) const {
    return false;
}

UPalIndividualCharacterSlot* UPalCharacterContainerManager::GetLocalSlot(const FPalContainerId& ContainerId, const int32 SlotIndex) const {
    return NULL;
}

UPalIndividualCharacterContainer* UPalCharacterContainerManager::GetLocalContainer(const FPalContainerId& ContainerId) const {
    return NULL;
}

UPalIndividualCharacterContainer* UPalCharacterContainerManager::GetContainer(const FPalContainerId& ContainerId) const {
    return NULL;
}


