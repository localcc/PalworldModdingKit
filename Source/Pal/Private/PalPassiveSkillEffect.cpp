#include "PalPassiveSkillEffect.h"

FPalPassiveSkillEffect::FPalPassiveSkillEffect() {
    this->Type = EPalPassiveSkillEffectType::no;
    this->Value = 0.00f;
    this->TribeId = EPalTribeID::None;
    this->IsPartnerSkill = false;
    this->IsStackablePartnerSkillBySameTribe = false;
}

