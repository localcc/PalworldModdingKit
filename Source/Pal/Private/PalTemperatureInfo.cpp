#include "PalTemperatureInfo.h"

FPalTemperatureInfo::FPalTemperatureInfo() {
    this->CurrentResistRank_Heat = 0;
    this->CurrentResistRank_Cold = 0;
    this->CurrentTemperature = 0;
    this->CurrentBodyState = EPalBodyTemperatureState::Default;
}

