#include "PalPickingGameSettingData.h"

FPalPickingGameSettingData::FPalPickingGameSettingData() {
    this->DifficultyLevel = 0;
    this->UnlockableRangeSize = 0.00f;
    this->LimitKeyPressureCurve = NULL;
    this->KeyTurningCurveOutsideUnlockableRange = NULL;
}

