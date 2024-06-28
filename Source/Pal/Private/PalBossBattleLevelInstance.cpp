#include "PalBossBattleLevelInstance.h"

APalBossBattleLevelInstance::APalBossBattleLevelInstance(const FObjectInitializer& ObjectInitializer) {
    this->bIsLoaded = false;
    this->Difficulty = EPalBossBattleDifficulty::None;
}






void APalBossBattleLevelInstance::BossSpawned(APalCharacter* SpawnedCharacter) {
}


