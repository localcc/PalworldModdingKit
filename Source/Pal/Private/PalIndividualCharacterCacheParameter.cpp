#include "PalIndividualCharacterCacheParameter.h"

FPalIndividualCharacterCacheParameter::FPalIndividualCharacterCacheParameter() {
    this->bSleeping = false;
    this->InvaderType = EPalInvaderType::None;
    this->bIsInArena = false;
    this->ArenaDamageRate = 0.00f;
    this->OverrideLevel = 0;
    this->GroupType = EPalGroupType::Undefined;
}

