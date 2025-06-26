#include "PalSpawnedFishShadowData.h"

FPalSpawnedFishShadowData::FPalSpawnedFishShadowData() {
    this->OnlyTime = EPalOneDayTimeType::Undefined;
    this->BehaviorType = EPalFishBattleBehaviorType::Normal;
    this->Difficulty = 0.00f;
    this->DecreaseDurability = 0.00f;
    this->FishingSpotDifficulty = EPalFishingSpotDifficultyType::None;
}

