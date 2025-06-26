#include "PalArenaPlayerInfo.h"

FPalArenaPlayerInfo::FPalArenaPlayerInfo() {
    this->PlayerIndex = EPalArenaPlayerIndex::None;
    this->PlayerIndividualParameter = NULL;
    this->ArenaRank = EPalArenaRank::Bronze;
    this->bIsNpc = false;
}

