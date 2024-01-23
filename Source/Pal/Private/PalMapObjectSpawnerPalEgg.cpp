#include "PalMapObjectSpawnerPalEgg.h"

void APalMapObjectSpawnerPalEgg::OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}

APalMapObjectSpawnerPalEgg::APalMapObjectSpawnerPalEgg() {
    this->RespawnTimeMinutesObtained = 300.00f;
    this->bRespawnableMulti = true;
}

