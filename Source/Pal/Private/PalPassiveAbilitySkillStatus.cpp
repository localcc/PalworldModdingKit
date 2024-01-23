#include "PalPassiveAbilitySkillStatus.h"

FPalPassiveAbilitySkillStatus::FPalPassiveAbilitySkillStatus() {
    this->State = EPalPassiveAbilitySkillState::None;
    this->ElapsedTime = 0.00f;
    this->TriggerType = EPalPassiveTriggerType::None;
}

