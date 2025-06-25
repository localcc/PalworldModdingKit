#include "PalMapObjectMedicalPalBedModel.h"

UPalMapObjectMedicalPalBedModel::UPalMapObjectMedicalPalBedModel() {
    this->SleepingCharacterHandle = NULL;
    this->AdditionalHealingRate = 1.00f;
    this->AffectSanityRate = 1.00f;
}

void UPalMapObjectMedicalPalBedModel::OnNightSkip() {
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

void UPalMapObjectMedicalPalBedModel::CalcCharacterLocationAndRotationOffset(const FName CharacterID, const APalCharacter* Character, const FName MapObjectId, const UPalMapObjectMedicalPalBedSleepOnSideLocationOffsetComponent* LocationOffsetComponent, FVector& OutLocationOffset, FQuat& OutRotationOffset) {
}


