#include "PalHiddenAreaBase.h"
#include "PalProceduralFoliageComponent.h"

APalHiddenAreaBase::APalHiddenAreaBase() {
    this->ProceduralComponent = CreateDefaultSubobject<UPalProceduralFoliageComponent>(TEXT("PalProceduralFoliageComponent"));
}

