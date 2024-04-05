#include "PalRaidBossSpawnInfo.h"

FPalRaidBossSpawnInfo::FPalRaidBossSpawnInfo() {
    this->Level = 0;
    this->WarpWazaID = EPalWazaID::None;
    this->CanModeChange = false;
    this->ModeChange_AddStatusToAllWhenModeChgange = EPalStatusID::None;
    this->ModeChange_Element1 = EPalElementType::None;
    this->ModeChange_Element2 = EPalElementType::None;
}

