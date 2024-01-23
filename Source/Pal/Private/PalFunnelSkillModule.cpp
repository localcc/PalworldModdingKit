#include "PalFunnelSkillModule.h"

bool UPalFunnelSkillModule::ShouldSetSkillAction_Implementation() const {
    return false;
}

void UPalFunnelSkillModule::SetCharacter(APalCharacter* Character) {
}

void UPalFunnelSkillModule::OnTick_Implementation(float DeltaTime) {
}

void UPalFunnelSkillModule::OnNotifyFinishSkillAction_Implementation() {
}

APalCharacter* UPalFunnelSkillModule::GetCharacter() const {
    return NULL;
}

UPalFunnelSkillModule::UPalFunnelSkillModule() {
    this->FunnelCharacter = NULL;
}

