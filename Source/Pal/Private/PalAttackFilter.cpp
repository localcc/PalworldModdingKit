#include "PalAttackFilter.h"

UPalAttackFilter::UPalAttackFilter() {
    this->Waza = EPalWazaID::None;
    this->VelocityOwner = EPalBlowVelocityOwner::HitComponent;
    this->WazaPowerRate = 1.00f;
    this->OverrideElementType = EPalElementType::None;
    this->OverrideAdditionalEffectType1 = EPalAdditionalEffectType::None;
    this->OverrideAdditionalEffectType2 = EPalAdditionalEffectType::None;
    this->Attacker = NULL;
}

