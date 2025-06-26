#include "PalTreasureMapPoint.h"

APalTreasureMapPoint::APalTreasureMapPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->InteractivePoint = NULL;
}


