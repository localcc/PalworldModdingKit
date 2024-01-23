#include "PalMapObjectSpawnerTreasureBox.h"

void APalMapObjectSpawnerTreasureBox::OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}

APalMapObjectSpawnerTreasureBox::APalMapObjectSpawnerTreasureBox() {
    this->RespawnTimeMinutesObtained = 300.00f;
    this->bRespawnableMulti = true;
}

