#include "PalHiddenAreaCapsule.h"
#include "PalHiddenCapsuleComponent.h"

APalHiddenAreaCapsule::APalHiddenAreaCapsule() {
    this->HiddenCapsuleComponent = CreateDefaultSubobject<UPalHiddenCapsuleComponent>(TEXT("HiddenCapsuleComponent"));
}

