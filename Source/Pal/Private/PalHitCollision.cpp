#include "PalHitCollision.h"
#include "PalHitFilter.h"

APalHitCollision::APalHitCollision() {
    this->HitFilter = CreateDefaultSubobject<UPalHitFilter>(TEXT("HitFilter"));
}

