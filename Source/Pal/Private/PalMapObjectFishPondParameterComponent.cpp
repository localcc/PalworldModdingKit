#include "PalMapObjectFishPondParameterComponent.h"

UPalMapObjectFishPondParameterComponent::UPalMapObjectFishPondParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StoreCharacterMaxNum = 10;
    this->ItemChestSlotNum = 10;
    this->MenuUIClass = NULL;
    this->ObtainCharactersUIClass = NULL;
}


