#include "PalBuildObjectDefenseBase.h"

APalBuildObjectDefenseBase::APalBuildObjectDefenseBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefenseAIActionClass = NULL;
    this->MagazineSize = 0;
}


