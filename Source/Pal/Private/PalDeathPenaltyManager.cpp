#include "PalDeathPenaltyManager.h"

void UPalDeathPenaltyManager::DropDeathPenaltyChest(APalPlayerCharacter* Player) {
}

UPalDeathPenaltyManager::UPalDeathPenaltyManager() {
    this->StageDeathPenaltyRayStartHeight = 100.00f;
    this->StageDeathPenaltyChestRadius = 80.00f;
    this->StageDeathPenaltySpaceWidth = 1000.00f;
    this->StageDeathPenaltySpaceDepth = 1000.00f;
}

