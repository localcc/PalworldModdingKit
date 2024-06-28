#include "PalOilrigSaveStatus.h"

FPalOilrigSaveStatus::FPalOilrigSaveStatus() {
    this->GoalTreasureBoxSpawnerIndex = 0;
    this->Alarm = false;
    this->Clear = false;
    this->ResetTimer = 0.00f;
    this->IsMachineTimerCountUp = false;
    this->IsMachineDestroyed = false;
    this->MachineStartTimer = 0.00f;
}

