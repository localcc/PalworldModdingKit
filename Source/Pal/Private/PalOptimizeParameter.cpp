#include "PalOptimizeParameter.h"

FPalOptimizeParameter::FPalOptimizeParameter() {
    this->FoliageISMDistance_Meters = 0;
    this->TargetFPS = 0.00f;
    this->MinFPS = 0.00f;
    this->MaxFPS = 0.00f;
    this->CharacterImportance_CheckNumberPerFrame = 0;
    this->CharacterImportance_NearestCount = 0;
    this->CharacterImportance_NearDistance = 0.00f;
    this->CharacterImportance_FarDistance = 0.00f;
    this->CharacterImportance_FarthestDistance = 0.00f;
    this->SpawnerImportance_NearDistance = 0.00f;
    this->SpawnerImportance_FarDistance = 0.00f;
}

