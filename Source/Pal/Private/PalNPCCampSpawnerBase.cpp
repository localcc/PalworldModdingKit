#include "PalNPCCampSpawnerBase.h"

APalNPCCampSpawnerBase::APalNPCCampSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float APalNPCCampSpawnerBase::CalcRemainRespawnTime(const FPalEnemyCampStatus& CampStatus) const {
    return 0.0f;
}

float APalNPCCampSpawnerBase::CalcRemainDespawnTime(const FPalEnemyCampStatus& CampStatus) const {
    return 0.0f;
}


