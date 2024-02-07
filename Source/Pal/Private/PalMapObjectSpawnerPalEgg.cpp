#include "PalMapObjectSpawnerPalEgg.h"

APalMapObjectSpawnerPalEgg::APalMapObjectSpawnerPalEgg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RespawnTimeMinutesObtained = 300.00f;
    this->bRespawnableMulti = true;
}

void APalMapObjectSpawnerPalEgg::OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}


