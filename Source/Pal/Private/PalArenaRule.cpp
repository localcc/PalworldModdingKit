#include "PalArenaRule.h"

FPalArenaRule::FPalArenaRule() {
    this->bLevelSync = false;
    this->TimeLimit = 0;
    this->PlayerDamageRate = 0.00f;
    this->PalDamageRate = 0.00f;
    this->bBossPalRestricion = false;
    this->bLegendPalRestricion = false;
    this->bHumanRestricion = false;
    this->bRideRestricion = false;
    this->bDuplicatePalRestricion = false;
}

