#include "PalOilrigSaveStatus.h"

FPalOilrigSaveStatus::FPalOilrigSaveStatus() {
    this->GoalTreasureBoxSpawnerIndex = 0;
    this->Alarm = false;
    this->Clear = false;
    this->ResetTimer = 0.00f;
    this->IsMachineSpawned = false;
    this->IsMachineDestroyed = false;
}

