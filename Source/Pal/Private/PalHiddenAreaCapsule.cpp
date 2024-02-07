#include "PalHiddenAreaCapsule.h"
#include "PalHiddenCapsuleComponent.h"

APalHiddenAreaCapsule::APalHiddenAreaCapsule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPalHiddenCapsuleComponent>(TEXT("HiddenCapsuleComponent"));
    this->HiddenCapsuleComponent = (UPalHiddenCapsuleComponent*)RootComponent;
}


