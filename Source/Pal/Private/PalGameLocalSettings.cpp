#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::VeryLow;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = AAM_None;
    this->DLSSMode = UDLSSMode::Performance;
    this->GraphicsCommonQuality = 0;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


