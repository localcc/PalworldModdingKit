#include "PalTechnologyDataTableRowBase.h"

FPalTechnologyDataTableRowBase::FPalTechnologyDataTableRowBase() {
    this->RequireDefeatTowerBoss = EPalBossType::None;
    this->IsBossTechnology = false;
    this->LevelCap = 0;
    this->Tier = 0;
    this->Cost = 0;
}

