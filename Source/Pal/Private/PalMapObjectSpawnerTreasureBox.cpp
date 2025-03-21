#include "PalMapObjectSpawnerTreasureBox.h"

APalMapObjectSpawnerTreasureBox::APalMapObjectSpawnerTreasureBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAdjustMapObjectToFloor = true;
    this->bLotteryByMultiTreasureBoxLotteryParameters = false;
    this->RespawnTimeMinutesObtained = 300.00f;
    this->bRespawnableMulti = true;
    this->bAllowOverlapForMapObject = false;
}

void APalMapObjectSpawnerTreasureBox::OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}


