#include "PalMapObjectMedicalPalBedModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectMedicalPalBedModel::UPalMapObjectMedicalPalBedModel() {
    this->SleepingCharacterHandle = NULL;
    this->AdditionalHealingRate = 1.00f;
    this->AffectSanityRate = 1.00f;
    this->ResurrectSpeedMultiplier = 1.00f;
    this->StatusHUDUIModel = NULL;
}

void UPalMapObjectMedicalPalBedModel::OnRep_ResurrectCompleteRealProgressDateTime() {
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

void UPalMapObjectMedicalPalBedModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectMedicalPalBedModel, ResurrectCompleteRealProgressDateTime);
}


