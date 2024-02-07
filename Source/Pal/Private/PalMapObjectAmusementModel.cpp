#include "PalMapObjectAmusementModel.h"

UPalMapObjectAmusementModel::UPalMapObjectAmusementModel() {
    this->HealingCharacterHandle = NULL;
    this->AffectSanityRate = 1.00f;
    this->AIActionClass = NULL;
}

void UPalMapObjectAmusementModel::OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void UPalMapObjectAmusementModel::OnFinishHealingAction(UPalAIActionBase* action) {
}

UPalIndividualCharacterHandle* UPalMapObjectAmusementModel::GetHealingHandle() const {
    return NULL;
}

void UPalMapObjectAmusementModel::ClearCharacterHandle() {
}


