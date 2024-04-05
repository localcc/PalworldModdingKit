#include "PalLightingVolumeController.h"

APalLightingVolumeController::APalLightingVolumeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PPSkyCreator = NULL;
    this->CurrentVolume = NULL;
}


