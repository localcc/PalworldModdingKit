#include "PalDungeonFixedEntrance.h"
#include "Templates/SubclassOf.h"

FGuid APalDungeonFixedEntrance::GetLevelObjectInstanceId() const {
    return FGuid{};
}

TSoftClassPtr<APalNPCSpawnerBase> APalDungeonFixedEntrance::GetEnemySpawnerSoftClass() const {
    return NULL;
}

TSubclassOf<APalNPCSpawnerBase> APalDungeonFixedEntrance::GetEnemySpawner() const {
    return NULL;
}

UDataLayerAsset* APalDungeonFixedEntrance::GetDataLayerAsset() const {
    return NULL;
}

APalDungeonFixedEntrance::APalDungeonFixedEntrance() {
    this->DataLayerAsset = NULL;
    this->RespawnCoolTimeMinutesAfterBossDefeated = 10.00f;
    this->EnemySpawnerClass = NULL;
}

