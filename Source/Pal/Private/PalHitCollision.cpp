#include "PalHitCollision.h"
#include "PalHitFilter.h"

APalHitCollision::APalHitCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitFilter = CreateDefaultSubobject<UPalHitFilter>(TEXT("HitFilter"));
}


