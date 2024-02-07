#include "PalDungeonPointMarker.h"

APalDungeonPointMarker::APalDungeonPointMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->bEditSpawnParameter = false;
    this->DungeonEntranceClass = NULL;
}


