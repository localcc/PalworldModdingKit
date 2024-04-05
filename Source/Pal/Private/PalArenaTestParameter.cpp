#include "PalArenaTestParameter.h"

FPalArenaTestParameter::FPalArenaTestParameter() {
    this->Player1Data = NULL;
    this->Player2Data = NULL;
    this->Player1StartPoint = NULL;
    this->Player2StartPoint = NULL;
    this->BattleBGMStateGroup = EPalAudioStateGroup::InRaid;
    this->RideDelayTime = 0.00f;
    this->bRandomPartyMode = false;
    this->RandomPartyPalLevel = 0;
}

