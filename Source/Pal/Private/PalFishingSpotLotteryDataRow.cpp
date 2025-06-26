#include "PalFishingSpotLotteryDataRow.h"

FPalFishingSpotLotteryDataRow::FPalFishingSpotLotteryDataRow() {
    this->Weight = 0.00f;
    this->OnlyTime = EPalOneDayTimeType::Undefined;
    this->MinLevel = 0;
    this->MaxLevel = 0;
    this->Difficulty = 0;
    this->DecreaseDurability = 0.00f;
    this->FishingSpotDifficulty = EPalFishingSpotDifficultyType::None;
}

