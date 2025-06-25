#include "PalArenaPlayerInitializeParameter.h"

FPalArenaPlayerInitializeParameter::FPalArenaPlayerInitializeParameter() {
    this->PlayerIndex = EPalArenaPlayerIndex::None;
    this->ArenaRank = EPalArenaRank::Bronze;
    this->bIsNpc = false;
    this->bPartySelected = false;
}

