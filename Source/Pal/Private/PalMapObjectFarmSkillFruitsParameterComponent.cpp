#include "PalMapObjectFarmSkillFruitsParameterComponent.h"

UPalMapObjectFarmSkillFruitsParameterComponent::UPalMapObjectFarmSkillFruitsParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrowupTime = 0.00f;
    this->WateringWorkAmount = 0.00f;
    this->MenuUIWidgetClass = NULL;
    this->FarmSkillFruitsTreeClass = NULL;
}


