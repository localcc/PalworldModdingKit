#include "PalWorldSaveData.h"

FPalWorldSaveData::FPalWorldSaveData() {
    this->DungeonLevelVersion = EPalDungeonLevelVersion::BeforeVersionWasAdded;
    this->WorldMetaSaveVersionBitMask = 0;
}

