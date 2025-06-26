#include "PalDungeonRewardSpawnerPoint.h"

APalDungeonRewardSpawnerPoint::APalDungeonRewardSpawnerPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RewardSpawnerType = EPalDungeonRewardSpawnerType::Easy01;
    this->Behaviour = NULL;
}

void APalDungeonRewardSpawnerPoint::CheckLevelStreamingCompleted_ServerInternal() {
}


