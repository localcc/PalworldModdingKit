#include "PalMapObjectSpawnBlocker.h"

APalMapObjectSpawnBlocker::APalMapObjectSpawnBlocker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->ProbabilityActivate = 100;
}



