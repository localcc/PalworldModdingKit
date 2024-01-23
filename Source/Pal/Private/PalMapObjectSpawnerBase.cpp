#include "PalMapObjectSpawnerBase.h"

void APalMapObjectSpawnerBase::OnWorldMapObjectSpawnableInServer() {
}

APalMapObjectSpawnerBase::APalMapObjectSpawnerBase() {
    this->ProbabilityRespawn = 100;
    this->LotteryCoolTimeMinutes = 60.00f;
    this->LocateSphere = NULL;
}

