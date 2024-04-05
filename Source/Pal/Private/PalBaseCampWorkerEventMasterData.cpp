#include "PalBaseCampWorkerEventMasterData.h"

FPalBaseCampWorkerEventMasterData::FPalBaseCampWorkerEventMasterData() {
    this->Priority = EPalBaseCampWorkerEventPriority::Top;
    this->TriggerSanity = 0;
    this->bAllowInterruptRecoverHungry = false;
    this->bAllowInterruptSleep = false;
    this->bAssignableWork = false;
    this->bAssignableFixedWork = false;
    this->TriggerSkipCount = 0;
    this->logPriority = EPalLogPriority::None;
    this->LogTone = EPalLogContentToneType::Normal;
    this->Invalid = false;
}

