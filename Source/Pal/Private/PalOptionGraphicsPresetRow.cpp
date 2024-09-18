#include "PalOptionGraphicsPresetRow.h"

FPalOptionGraphicsPresetRow::FPalOptionGraphicsPresetRow() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::None;
    this->AntiAliasingType = AAM_None;
    this->CommonQuality = 0;
    this->ViewDistanceQuality = 0;
    this->MapObjectDrawDistanceType = EPalOptionMapObjectDrawDistanceType::Invalid;
    this->FoliageQuality = 0;
    this->ShadowQuality = 0;
    this->TextureQuality = 0;
    this->bEnableMotionBlur = false;
    this->ScreenPercentage = 0;
}

