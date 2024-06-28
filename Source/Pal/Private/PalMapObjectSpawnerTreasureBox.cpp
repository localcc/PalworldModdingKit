#include "PalMapObjectSpawnerTreasureBox.h"

APalMapObjectSpawnerTreasureBox::APalMapObjectSpawnerTreasureBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLotteryByMultiTreasureBoxLotteryParameters = false;
    this->RespawnTimeMinutesObtained = 300.00f;
    this->bRespawnableMulti = true;
}

void APalMapObjectSpawnerTreasureBox::OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}


