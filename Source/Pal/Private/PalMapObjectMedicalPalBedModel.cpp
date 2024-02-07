#include "PalMapObjectMedicalPalBedModel.h"

UPalMapObjectMedicalPalBedModel::UPalMapObjectMedicalPalBedModel() {
    this->SleepingCharacterHandle = NULL;
    this->AdditionalHealingRate = 1.00f;
    this->AffectSanityRate = 1.00f;
}

void UPalMapObjectMedicalPalBedModel::OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectMedicalPalBedModel::OnFinishSleepAction(UPalAIActionBase* action) {
}

UPalIndividualCharacterHandle* UPalMapObjectMedicalPalBedModel::GetSleepingHandle() const {
    return NULL;
}

void UPalMapObjectMedicalPalBedModel::ClearSleepingCharacterHandle() {
}


