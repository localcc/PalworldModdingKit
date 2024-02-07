#include "PalHiddenAreaBase.h"
#include "PalProceduralFoliageComponent.h"

APalHiddenAreaBase::APalHiddenAreaBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProceduralComponent = CreateDefaultSubobject<UPalProceduralFoliageComponent>(TEXT("PalProceduralFoliageComponent"));
}


