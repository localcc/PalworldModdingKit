#include "PalMapObjectPalEgg.h"
#include "PalMapObjectPickupItemPalEggParameterComponent.h"

FName APalMapObjectPalEgg::GetCharacterID() {
    return NAME_None;
}

APalMapObjectPalEgg::APalMapObjectPalEgg() {
    this->ParameterComponent = CreateDefaultSubobject<UPalMapObjectPickupItemPalEggParameterComponent>(TEXT("PalEggParameter"));
}

