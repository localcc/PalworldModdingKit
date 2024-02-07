#include "PalMapObjectMedicalPalBedParameterComponent.h"

UPalMapObjectMedicalPalBedParameterComponent::UPalMapObjectMedicalPalBedParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AdditionalHealingRate = 1.10f;
    this->AffectSanityRate = 1.00f;
}


