#include "PalFishShadowDataRow.h"

FPalFishShadowDataRow::FPalFishShadowDataRow() {
    this->FishShadowSize = EPalFishShadowSizeType::None;
    this->MoveSpeedPerSec = 0.00f;
    this->SearchRadius = 0.00f;
    this->SearchProbability = 0.00f;
    this->KingPassiveRate = 0.00f;
    this->RarePassiveRate = 0.00f;
    this->BehaviorType = EPalFishBattleBehaviorType::Normal;
}

