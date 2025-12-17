#include "PalGameLocalSettings.h"

UPalGameLocalSettings::UPalGameLocalSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::High;
    this->DefaultGraphicsLevel = EPalOptionGraphicsLevel::High;
    this->bRunedBenchMark = true;
    this->bHasAppliedUserSetting = true;
    this->AntiAliasingType = AAM_TSR;
    this->DLSSMode = EPalOptionUpscalingLevel::Performance;
    this->DLSSFrameGenerationMode = EPalDLSSGMode::Auto;
    this->DLSSGeneratedFrames = 1;
    this->ReflexMode = EPalReflexMode::On;
    this->GraphicsCommonQuality = 2;
    this->GraphicsLightQuality = 0;
    this->bAppliedSteamDeckSettings = false;
}

bool UPalGameLocalSettings::RequireBenchMarkScalaBility() {
    return false;
}


