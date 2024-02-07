#include "PalMapLevelObject.h"

APalMapLevelObject::APalMapLevelObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FGuid APalMapLevelObject::GetLevelObjectInstanceId() const {
    return FGuid{};
}


