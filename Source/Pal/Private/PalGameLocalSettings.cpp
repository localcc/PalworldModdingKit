#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::High;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = AAM_TSR;
    this->DLSSMode = UDLSSMode::Performance;
    this->GraphicsCommonQuality = 2;
    this->bAppliedSteamDeckSettings = false;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


