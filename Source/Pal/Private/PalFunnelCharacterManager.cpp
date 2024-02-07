#include "PalFunnelCharacterManager.h"

UPalFunnelCharacterManager::UPalFunnelCharacterManager() {
}

void UPalFunnelCharacterManager::SpawnActorCallback(const FGuid& Guid, AActor* Actor) {
}




APalCharacter* UPalFunnelCharacterManager::GetOwnerCharacter(const APalFunnelCharacter* FunnelCharacter) const {
    return NULL;
}

int32 UPalFunnelCharacterManager::GetIndexOfFunnelsWithinSameTrainer(APalFunnelCharacter* FunnelCharacter) const {
    return 0;
}


