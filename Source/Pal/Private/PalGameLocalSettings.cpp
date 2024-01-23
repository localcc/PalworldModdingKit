#include "PalGameLocalSettings.h"

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::VeryHigh;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = AAM_TSR;
    this->DLSSMode = UDLSSMode::Off;
    this->GraphicsCommonQuality = 3;
}

