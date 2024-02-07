#include "PalDungeonAreaVolume.h"

APalDungeonAreaVolume::APalDungeonAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
}

void APalDungeonAreaVolume::OnOverlapActor(AActor* Other) {
}


