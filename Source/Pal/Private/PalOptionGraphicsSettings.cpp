#include "PalOptionGraphicsSettings.h"

FPalOptionGraphicsSettings::FPalOptionGraphicsSettings() {
    this->GraphicsLevel = EPalOptionGraphicsLevel::None;
    this->WindowMode = EWindowMode::Fullscreen;
    this->bEnableVSync = false;
    this->bEnableMotionBlur = false;
    this->AntiAliasingType = AAM_None;
    this->bEnableCameraShake = false;
    this->bEnableCameraRecoil = false;
    this->FOV = 0.00f;
    this->PalRideCameraLengthRate = 0.00f;
    this->LODBias = 0.00f;
    this->DrawDistance = 0.00f;
    this->GrassDrawDistance = 0.00f;
    this->bEnableShadow = false;
    this->ShadowResolution = 0.00f;
    this->CommonQuality = 0;
    this->ViewDistanceQuality = 0;
    this->FoliageQuality = 0;
    this->ShadowQuality = 0;
    this->Brightness = 0.00f;
    this->bEnableAutoContrast = false;
    this->TextureQuality = 0;
    this->DLSSMode = UDLSSMode::Off;
    this->MaxFPS = 0.00f;
    this->ScreenPercentage = 0;
}

