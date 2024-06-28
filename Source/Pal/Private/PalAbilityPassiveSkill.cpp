#include "PalAbilityPassiveSkill.h"

UPalAbilityPassiveSkill::UPalAbilityPassiveSkill() {
    this->isReserving = true;
    this->bIsRestricted = false;
    this->bRequireWorkerWorkingPassiveSkill = false;
    this->bIsWorking = false;
    this->CurrentRank = 0;
}

void UPalAbilityPassiveSkill::OnWorkerAssignChanged(UPalCharacterParameterComponent* Parameter) {
}

void UPalAbilityPassiveSkill::OnUpdateOtomoHolder(APalCharacter* Character) {
}

void UPalAbilityPassiveSkill::OnUpdateInventoryContainer(UPalItemContainer* Container) {
}

void UPalAbilityPassiveSkill::OnUpdateBaseCampId(const FGuid& BaseCampId) {
}

void UPalAbilityPassiveSkill::OnRideInactivated() {
}

void UPalAbilityPassiveSkill::OnRideActivated() {
}

void UPalAbilityPassiveSkill::OnReserveInactivated() {
}

void UPalAbilityPassiveSkill::OnReserveActivated() {
}

void UPalAbilityPassiveSkill::OnRemoveWorker(UPalIndividualCharacterHandle* RemoveCharacterHandle) {
}

void UPalAbilityPassiveSkill::OnInactivatedAsWorker() {
}

void UPalAbilityPassiveSkill::OnInactivatedAsOtomoHolder() {
}

void UPalAbilityPassiveSkill::OnInactivatedAsOtomo() {
}

void UPalAbilityPassiveSkill::OnChangeDisablePassiveSkill(bool isDisable) {
}

void UPalAbilityPassiveSkill::OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle) {
}

void UPalAbilityPassiveSkill::OnActivatedAsWorker() {
}

void UPalAbilityPassiveSkill::OnActivatedAsOtomoHolder() {
}

void UPalAbilityPassiveSkill::OnActivatedAsOtomo() {
}

void UPalAbilityPassiveSkill::ObserveWorking() {
}

bool UPalAbilityPassiveSkill::IsRestricted() const {
    return false;
}

void UPalAbilityPassiveSkill::Initialize(const TArray<FPalPassiveAbilitySkills>& _PassiveSkills) {
}

void UPalAbilityPassiveSkill::InactivateWorkingSkill() {
}

APalPlayerController* UPalAbilityPassiveSkill::GetTrainerController() const {
    return NULL;
}

APalPlayerCharacter* UPalAbilityPassiveSkill::GetTrainerActor() const {
    return NULL;
}

ACharacter* UPalAbilityPassiveSkill::GetTrainer() const {
    return NULL;
}

TArray<FName> UPalAbilityPassiveSkill::GetPassiveSkillList() const {
    return TArray<FName>();
}

APalCharacter* UPalAbilityPassiveSkill::GetOwner() const {
    return NULL;
}

int32 UPalAbilityPassiveSkill::GetOtomoRank() const {
    return 0;
}


