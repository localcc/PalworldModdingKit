#include "PalAbilitySkillParameterComponent.h"

void UPalAbilitySkillParameterComponent::OnRideInactivated() {
}

void UPalAbilitySkillParameterComponent::OnRideActivated() {
}

void UPalAbilitySkillParameterComponent::OnOwnerCharacterSpawned(FPalInstanceID ID) {
}

void UPalAbilitySkillParameterComponent::OnInitializedCharacter(APalCharacter* OwnerCharacter) {
}

void UPalAbilitySkillParameterComponent::OnInactivatedAsWorker() {
}

void UPalAbilitySkillParameterComponent::OnInactivatedAsPartner() {
}

void UPalAbilitySkillParameterComponent::OnInactivatedAsOtomoHolder() {
}

void UPalAbilitySkillParameterComponent::OnActivatedAsWorker() {
}

void UPalAbilitySkillParameterComponent::OnActivatedAsPartner() {
}

void UPalAbilitySkillParameterComponent::OnActivatedAsOtomoHolder() {
}

UPalAbilitySkillParameterComponent::UPalAbilitySkillParameterComponent() {
    this->AbilitySkills.AddDefaulted(1);
    this->PassiveSkill = NULL;
}

