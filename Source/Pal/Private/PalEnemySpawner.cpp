#include "PalEnemySpawner.h"

APalEnemySpawner::APalEnemySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnemyActorType = EPalEnemySpawnActorType::Rifle;
    this->DefaultAction = EPalEnemySpawnDefaultAction::StopStand;
}


