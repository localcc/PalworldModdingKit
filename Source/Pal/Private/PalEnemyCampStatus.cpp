#include "PalEnemyCampStatus.h"

FPalEnemyCampStatus::FPalEnemyCampStatus() {
    this->bIsSpawned = false;
    this->bIsEnemyAllDead = false;
    this->bIsClear = false;
    this->bRewardReceived = false;
    this->RewardPalLevel = 0;
    this->ElapsedTime = 0.00f;
    this->CampPresetIndex = 0;
}

