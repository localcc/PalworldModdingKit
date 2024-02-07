#include "PalFunnelSkillModuleReticleTargetAttack.h"

UPalFunnelSkillModuleReticleTargetAttack::UPalFunnelSkillModuleReticleTargetAttack() {
    this->bShouldSetSkillAction = false;
    this->SearchRange = 1000.00f;
    this->CoolTime = 0.00f;
}

void UPalFunnelSkillModuleReticleTargetAttack::Reset() {
}

APalCharacter* UPalFunnelSkillModuleReticleTargetAttack::GetTarget() const {
    return NULL;
}


