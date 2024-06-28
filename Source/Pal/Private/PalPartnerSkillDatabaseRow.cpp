#include "PalPartnerSkillDatabaseRow.h"

FPalPartnerSkillDatabaseRow::FPalPartnerSkillDatabaseRow() {
    this->EffectTime = 0.00f;
    this->CoolDownTime = 0.00f;
    this->ExecCost = 0.00f;
    this->IdleCost = 0.00f;
    this->CanThrowPal = false;
    this->CanChangeWeapon = false;
    this->IsToggleKey = false;
    this->TriggerType = EPalPartnerSkillTriggerType::None;
}

