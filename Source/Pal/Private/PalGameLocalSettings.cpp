#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::None;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::Medium;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = AAM_FXAA;
    this->DLSSMode = UDLSSMode::Performance;
    this->GraphicsCommonQuality = 1;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


