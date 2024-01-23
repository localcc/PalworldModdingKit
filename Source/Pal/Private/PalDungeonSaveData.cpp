#include "PalDungeonSaveData.h"

FPalDungeonSaveData::FPalDungeonSaveData() {
    this->DungeonType = EPalDungeonType::Normal;
    this->BossState = EPalDungeonInstanceBossState::Spawned;
    this->ReservedDataLayerAssetIndex = 0;
}

