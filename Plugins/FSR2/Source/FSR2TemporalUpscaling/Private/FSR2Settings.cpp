#include "FSR2Settings.h"

UFSR2Settings::UFSR2Settings() {
    this->bEnabled = false;
    this->AutoExposure = false;
    this->EnabledInEditorViewport = false;
    this->UseSSRExperimentalDenoiser = false;
    this->UseNativeDX12 = false;
    this->UseNativeVulkan = false;
    this->QualityMode = EFSR2QualityMode::Unused;
    this->HistoryFormat = EFSR2HistoryFormat::FloatRGBA;
    this->DeDither = EFSR2DeDitherMode::Off;
    this->Sharpness = 0.00f;
    this->AdjustMipBias = false;
    this->ReactiveMask = false;
    this->ForceVertexDeformationOutputsVelocity = false;
    this->ForceLandscapeHISMMobility = EFSR2LandscapeHISMMode::Off;
    this->ReflectionScale = 0.00f;
    this->ReflectionLuminanceBias = 0.00f;
    this->RoughnessScale = 0.00f;
    this->RoughnessBias = 0.00f;
    this->RoughnessMaxDistance = 0.00f;
    this->ReactiveMaskRoughnessForceMaxDistance = false;
    this->TranslucencyBias = 0.00f;
    this->TranslucencyLuminanceBias = 0.00f;
    this->TranslucencyMaxDistance = 0.00f;
    this->PreDOFTranslucencyScale = 0.00f;
    this->PreDOFTranslucencyMax = false;
    this->ReactiveShadingModelID = MSM_Unlit;
    this->ForceReactiveMaterialValue = 0.00f;
    this->ReactiveHistoryTranslucencyBias = 0.00f;
    this->ReactiveHistoryTranslucencyLumaBias = 0.00f;
}


