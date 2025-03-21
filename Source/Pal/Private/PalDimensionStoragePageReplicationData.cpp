#include "PalDimensionStoragePageReplicationData.h"

FPalDimensionStoragePageReplicationData::FPalDimensionStoragePageReplicationData() {
    this->pageIndex = 0;
    this->bDirtyToggle = false;
    this->TriggerType = EPalDimensionStorageReplicationTriggerType::Common;
}

