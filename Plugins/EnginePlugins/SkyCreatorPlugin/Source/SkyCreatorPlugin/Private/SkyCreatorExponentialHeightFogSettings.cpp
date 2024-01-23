#include "SkyCreatorExponentialHeightFogSettings.h"

FSkyCreatorExponentialHeightFogSettings::FSkyCreatorExponentialHeightFogSettings() {
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->FogStartDistance = 0.00f;
    this->SecondFogDensity = 0.00f;
    this->SecondFogHeightFalloff = 0.00f;
    this->DirectionalInscatteringExponent = 0.00f;
    this->DirectionalInscatteringStartDistance = 0.00f;
    this->VolumetricFogScatteringDistribution = 0.00f;
    this->VolumetricFogExtinctionScale = 0.00f;
}

