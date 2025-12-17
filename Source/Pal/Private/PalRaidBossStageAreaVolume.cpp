#include "PalRaidBossStageAreaVolume.h"

APalRaidBossStageAreaVolume::APalRaidBossStageAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
}

void APalRaidBossStageAreaVolume::OnOverlapActor(AActor* Other) {
}


