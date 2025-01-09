#include "PalPassiveSkillBase.h"

UPalPassiveSkillBase::UPalPassiveSkillBase() {
    this->isReserving = true;
    this->bIsRestricted = false;
    this->bRequireWorkerWorkingPassiveSkill = false;
    this->bIsWorking = false;
    this->CurrentRank = 0;
}

void UPalPassiveSkillBase::OnWorkerAssignChanged(UPalCharacterParameterComponent* Parameter) {
}

void UPalPassiveSkillBase::OnUpdateOtomoHolder(APalCharacter* Character) {
}

void UPalPassiveSkillBase::OnUpdateInventoryContainer(UPalItemContainer* Container) {
}

void UPalPassiveSkillBase::OnUpdateBaseCampId(const FGuid& BaseCampId) {
}

void UPalPassiveSkillBase::OnRideInactivated() {
}

void UPalPassiveSkillBase::OnRideActivated() {
}

void UPalPassiveSkillBase::OnReserveInactivated() {
}

void UPalPassiveSkillBase::OnReserveActivated() {
}

void UPalPassiveSkillBase::OnRemoveWorker(UPalIndividualCharacterHandle* RemoveCharacterHandle) {
}

void UPalPassiveSkillBase::OnInactivatedAsWorker() {
}

void UPalPassiveSkillBase::OnInactivatedAsOtomoHolder() {
}

void UPalPassiveSkillBase::OnInactivatedAsOtomo() {
}

void UPalPassiveSkillBase::OnChangeDisablePassiveSkill(bool isDisable, bool IsAllReset) {
}

void UPalPassiveSkillBase::OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle) {
}

void UPalPassiveSkillBase::OnActivatedAsWorker() {
}

void UPalPassiveSkillBase::OnActivatedAsOtomoHolder() {
}

void UPalPassiveSkillBase::OnActivatedAsOtomo() {
}

void UPalPassiveSkillBase::ObserveWorking() {
}

bool UPalPassiveSkillBase::IsRestricted() const {
    return false;
}

void UPalPassiveSkillBase::Initialize(const TArray<FPalPassiveSkills>& _PassiveSkills) {
}

void UPalPassiveSkillBase::InactivateWorkingSkill() {
}

APalPlayerController* UPalPassiveSkillBase::GetTrainerController() const {
    return NULL;
}

APalPlayerCharacter* UPalPassiveSkillBase::GetTrainerActor() const {
    return NULL;
}

ACharacter* UPalPassiveSkillBase::GetTrainer() const {
    return NULL;
}

TArray<FName> UPalPassiveSkillBase::GetPassiveSkillList() const {
    return TArray<FName>();
}

APalCharacter* UPalPassiveSkillBase::GetOwner() const {
    return NULL;
}

int32 UPalPassiveSkillBase::GetOtomoRank() const {
    return 0;
}


