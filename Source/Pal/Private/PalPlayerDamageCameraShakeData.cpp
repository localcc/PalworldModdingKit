#include "PalPlayerDamageCameraShakeData.h"

FPalPlayerDamageCameraShakeData::FPalPlayerDamageCameraShakeData() {
    this->Category = EPalPlayerDamageCameraShakeCategory::None;
    this->Scale_Min = 0.00f;
    this->Scale_Default = 0.00f;
    this->Scale_Max = 0.00f;
    this->HPRate_Min = 0;
    this->HPRate_Default = 0;
    this->HPRate_Max = 0;
}

