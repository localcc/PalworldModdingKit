#include "PalGaugeInterpolationCalculator.h"

FPalGaugeInterpolationCalculator::FPalGaugeInterpolationCalculator() {
    this->CurrentValue = 0.00f;
    this->TargetValue = 0.00f;
    this->bDirectionPositive = false;
}

