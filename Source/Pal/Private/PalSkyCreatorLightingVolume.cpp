#include "PalSkyCreatorLightingVolume.h"

APalSkyCreatorLightingVolume::APalSkyCreatorLightingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0;
    this->TransitionSpeed = 0.00f;
    this->RayleighExponentialDistribution = 0.00f;
    this->SkyLightIntensity = 0.00f;
    this->IsOverrideSkyLightIntensity = false;
    this->VolumeController = NULL;
}

void APalSkyCreatorLightingVolume::OnOverlap(AActor* OtherActor) {
}

void APalSkyCreatorLightingVolume::OnEndOverlap(AActor* OtherActor) {
}


