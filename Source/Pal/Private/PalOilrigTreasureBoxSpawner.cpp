#include "PalOilrigTreasureBoxSpawner.h"

APalOilrigTreasureBoxSpawner::APalOilrigTreasureBoxSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsOnlyOneBox = false;
    this->OnlyOneBoxEmptyBoxActorClass = NULL;
    this->SelfOilrigType = EPalOilrigType::Debug;
    this->MapObjectActor = NULL;
    this->OnlyOneEmptyBox = NULL;
}

void APalOilrigTreasureBoxSpawner::OnWorldMapObjectSpawnable_ServerInternal() {
}

void APalOilrigTreasureBoxSpawner::OnOpenTreasureBox() {
}

void APalOilrigTreasureBoxSpawner::OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result) {
}

void APalOilrigTreasureBoxSpawner::OnFinishedSpawningMapObjectActor(APalMapObject* MapObject) {
}

bool APalOilrigTreasureBoxSpawner::IsSpawnedGoalBox() {
    return false;
}


