#include "PalLevelObjectActor.h"

APalLevelObjectActor::APalLevelObjectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FGuid APalLevelObjectActor::GetLevelObjectInstanceId() const {
    return FGuid{};
}


