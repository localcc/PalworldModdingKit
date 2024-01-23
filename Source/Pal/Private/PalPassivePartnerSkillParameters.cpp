#include "PalPassivePartnerSkillParameters.h"

FPalPassivePartnerSkillParameters::FPalPassivePartnerSkillParameters() {
    this->DelayTime = 0.00f;
    this->TriggerTypeFlags = 0;
    this->WorkType = EPalWorkType::None;
    this->AssignOthers = false;
    this->TargetElementType = EPalElementType::None;
    this->bNotAssignSelf = false;
}

