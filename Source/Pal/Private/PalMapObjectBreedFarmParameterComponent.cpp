#include "PalMapObjectBreedFarmParameterComponent.h"

UPalMapObjectBreedFarmParameterComponent::UPalMapObjectBreedFarmParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BreedRequiredRealTime = 1200.00f;
    this->ExistPalEggMaxNum = 20;
    this->SlotNum = 5;
}


