#include "PalAbilitySkillParameterComponent.h"

UPalAbilitySkillParameterComponent::UPalAbilitySkillParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySkills.AddDefaulted(1);
    this->PassiveSkill = NULL;
}

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


