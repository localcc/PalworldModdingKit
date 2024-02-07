#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::VeryHigh;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = AAM_TSR;
    this->DLSSMode = UDLSSMode::Off;
    this->GraphicsCommonQuality = 3;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


