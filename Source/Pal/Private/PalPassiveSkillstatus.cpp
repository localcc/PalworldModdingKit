#include "PalPassiveSkillstatus.h"

FPalPassiveSkillstatus::FPalPassiveSkillstatus() {
    this->State = EPalPassiveSkillState::None;
    this->ElapsedTime = 0.00f;
    this->TriggerType = EPalPassiveTriggerType::None;
}

