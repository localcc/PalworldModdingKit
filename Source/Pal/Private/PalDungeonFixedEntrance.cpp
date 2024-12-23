#include "PalDungeonFixedEntrance.h"
#include "PalInteractLockSettingComponent.h"
#include "Templates/SubclassOf.h"

APalDungeonFixedEntrance::APalDungeonFixedEntrance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractLockSettingComponent = CreateDefaultSubobject<UPalInteractLockSettingComponent>(TEXT("InteractLockComponent"));
    this->DataLayerAsset = NULL;
    this->RespawnCoolTimeMinutesAfterBossDefeated = 10.00f;
    this->EnemySpawnerClass = NULL;
}

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


