#include "PalCoopSkillModuleBase.h"

UPalCoopSkillModuleBase::UPalCoopSkillModuleBase() {
    this->ExecuteLog = EPalLogType::None;
    this->OwnerCharacter = NULL;
}

void UPalCoopSkillModuleBase::Start() {
}

void UPalCoopSkillModuleBase::SetTrainerCoopFlag(bool IsCoop) {
}

void UPalCoopSkillModuleBase::OnTick_Implementation(float DeltaTime) {
}

void UPalCoopSkillModuleBase::OnStartSkill_Implementation() {
}

void UPalCoopSkillModuleBase::OnSkillOverheat_Implementation() {
}

void UPalCoopSkillModuleBase::OnInitialized_Implementation() {
}

void UPalCoopSkillModuleBase::Initialize(UPalPartnerSkillParameterComponent* PartnerSkillComponent) {
}

int32 UPalCoopSkillModuleBase::GetOwnerRank() const {
    return 0;
}

APalCharacter* UPalCoopSkillModuleBase::GetOwner() const {
    return NULL;
}

void UPalCoopSkillModuleBase::AddSkillLog() {
}

void UPalCoopSkillModuleBase::Abort() {
}


