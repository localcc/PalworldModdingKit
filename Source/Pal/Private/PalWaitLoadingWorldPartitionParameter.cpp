#include "PalWaitLoadingWorldPartitionParameter.h"

FPalWaitLoadingWorldPartitionParameter::FPalWaitLoadingWorldPartitionParameter() {
    this->CellState = EWorldPartitionRuntimeCellState::Unloaded;
    this->IntervalTime = 0.00f;
    this->InFirstDelayTime = 0.00f;
}

