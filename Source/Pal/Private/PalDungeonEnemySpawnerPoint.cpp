#include "PalDungeonEnemySpawnerPoint.h"

void APalDungeonEnemySpawnerPoint::OnEnterCharacterToGroup(UPalIndividualCharacterHandle* IndividualHandle) {
}

void APalDungeonEnemySpawnerPoint::OnCreatedGroup() {
}

void APalDungeonEnemySpawnerPoint::OnChangeBossState_ServerInternal(UPalDungeonInstanceModel* InstanceModel) {
}

void APalDungeonEnemySpawnerPoint::CheckLevelStreamingCompleted() {
}

APalDungeonEnemySpawnerPoint::APalDungeonEnemySpawnerPoint() {
    this->RankType = EPalDungeonEnemySpawnerRankType::Normal;
}

