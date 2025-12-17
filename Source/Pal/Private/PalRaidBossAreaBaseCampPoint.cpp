#include "PalRaidBossAreaBaseCampPoint.h"

APalRaidBossAreaBaseCampPoint::APalRaidBossAreaBaseCampPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FTransform APalRaidBossAreaBaseCampPoint::GetBaseCampPoint_Implementation() const {
    return FTransform{};
}


