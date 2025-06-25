#include "PalMapObjectSpawnerSimple.h"

APalMapObjectSpawnerSimple::APalMapObjectSpawnerSimple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLotteryByMultiLotteryParameters = false;
    this->bAllowOverlapForMapObject = false;
    this->bRespawnableMulti = true;
}

void APalMapObjectSpawnerSimple::OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}


