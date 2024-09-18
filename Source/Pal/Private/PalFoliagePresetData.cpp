#include "PalFoliagePresetData.h"

FPalFoliagePresetData::FPalFoliagePresetData() {
    this->Hp = 0;
    this->DropItemNum = 0;
    this->DropEXP = 0;
    this->DestroyFXType = EPalMapObjectDestroyFXType::None;
    this->DistanceFromPlayerNotRespawn = 0.00f;
    this->RespawnIntervalRealMinutes = 0;
    this->RetryRespawnIntervalRealMinutes = 0;
}

