#include "PalMapObjectPalEgg.h"
#include "PalMapObjectPickupItemPalEggParameterComponent.h"

APalMapObjectPalEgg::APalMapObjectPalEgg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParameterComponent = CreateDefaultSubobject<UPalMapObjectPickupItemPalEggParameterComponent>(TEXT("PalEggParameter"));
}

FName APalMapObjectPalEgg::GetCharacterID() {
    return NAME_None;
}


