#include "PalPassivePartnerSkillActiveSkillParameters.h"

FPalPassivePartnerSkillActiveSkillParameters::FPalPassivePartnerSkillActiveSkillParameters() {
    this->WazaID = EPalWazaID::None;
    this->bIdlelCostDecreaseEveryFrame = false;
    this->bIsExecSkillContinuation = false;
    this->bIsOneShotRideAction = false;
    this->IsRidingActiveSkillNotWeapon = false;
    this->RidingActiveSkillNotWeaponCondition = EPalRidingActiveSkillNotWeaponCondition::None;
    this->bIsToggleRidingActiveSkillNotWeapon = false;
}

