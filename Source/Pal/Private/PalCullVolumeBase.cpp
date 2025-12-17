#include "PalCullVolumeBase.h"

APalCullVolumeBase::APalCullVolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxActorsPerThreadPerFrame = 100;
}


