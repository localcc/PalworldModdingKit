#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::None;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = EAntiAliasingMethod::AAM_FXAA;
    this->DLSSMode = UDLSSMode::Performance;
    this->GraphicsCommonQuality = 3;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


