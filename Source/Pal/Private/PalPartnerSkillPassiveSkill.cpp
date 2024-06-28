#include "PalPartnerSkillPassiveSkill.h"

UPalPartnerSkillPassiveSkill::UPalPartnerSkillPassiveSkill() {
    this->isReserving = true;
    this->bIsRestricted = false;
    this->bRequireWorkerWorkingPassiveSkill = false;
    this->bIsWorking = false;
    this->CurrentRank = 0;
}

void UPalPartnerSkillPassiveSkill::OnWorkerAssignChanged(UPalCharacterParameterComponent* Parameter) {
}

void UPalPartnerSkillPassiveSkill::OnUpdateOtomoHolder(APalCharacter* Character) {
}

void UPalPartnerSkillPassiveSkill::OnUpdateInventoryContainer() {
}

void UPalPartnerSkillPassiveSkill::OnUpdateCurrentGround(TEnumAsByte<EPhysicalSurface> GroundType) {
}

void UPalPartnerSkillPassiveSkill::OnUpdateBaseCampId(const FGuid& BaseCampId) {
}

void UPalPartnerSkillPassiveSkill::OnRideInactivated() {
}

void UPalPartnerSkillPassiveSkill::OnRideActivated() {
}

void UPalPartnerSkillPassiveSkill::OnReserveInactivated() {
}

void UPalPartnerSkillPassiveSkill::OnReserveActivated() {
}

void UPalPartnerSkillPassiveSkill::OnRemoveWorker(UPalIndividualCharacterHandle* RemoveCharacterHandle) {
}

void UPalPartnerSkillPassiveSkill::OnInactivatedAsWorker() {
}

void UPalPartnerSkillPassiveSkill::OnInactivatedAsOtomoHolder() {
}

void UPalPartnerSkillPassiveSkill::OnInactivatedAsOtomo() {
}

void UPalPartnerSkillPassiveSkill::OnChangeDisablePassiveSkill(bool isDisable) {
}

void UPalPartnerSkillPassiveSkill::OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle) {
}

void UPalPartnerSkillPassiveSkill::OnActivatedAsWorker() {
}

void UPalPartnerSkillPassiveSkill::OnActivatedAsOtomoHolder() {
}

void UPalPartnerSkillPassiveSkill::OnActivatedAsOtomo() {
}

void UPalPartnerSkillPassiveSkill::ObserveWorking() {
}

bool UPalPartnerSkillPassiveSkill::IsRestricted() const {
    return false;
}

void UPalPartnerSkillPassiveSkill::Initialize(const TArray<FPalPassivePartnerSkillIdAndParameters>& _PassiveSkills) {
}

void UPalPartnerSkillPassiveSkill::InactivateWorkingSkill() {
}

APalPlayerController* UPalPartnerSkillPassiveSkill::GetTrainerController() const {
    return NULL;
}

APalPlayerCharacter* UPalPartnerSkillPassiveSkill::GetTrainerActor() const {
    return NULL;
}

ACharacter* UPalPartnerSkillPassiveSkill::GetTrainer() const {
    return NULL;
}

TArray<FName> UPalPartnerSkillPassiveSkill::GetPassiveSkillList() const {
    return TArray<FName>();
}

APalCharacter* UPalPartnerSkillPassiveSkill::GetOwner() const {
    return NULL;
}

int32 UPalPartnerSkillPassiveSkill::GetOtomoRank() const {
    return 0;
}


