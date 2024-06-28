#include "PalPlayerBattleSituation.h"

UPalPlayerBattleSituation::UPalPlayerBattleSituation() {
    this->IsNearCommonEnemy = false;
    this->NearDistanceSqr = -1.00f;
    this->CurrentMaxRank = EPalBattleBGMType::None;
}


