#include "PalRaidBossAreaEntrancePoint.h"

APalRaidBossAreaEntrancePoint::APalRaidBossAreaEntrancePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FTransform APalRaidBossAreaEntrancePoint::GetWarpPoint_Implementation() const {
    return FTransform{};
}


