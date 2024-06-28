#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::Medium;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = AAM_TSR;
    this->DLSSMode = UDLSSMode::Performance;
    this->GraphicsCommonQuality = 1;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


