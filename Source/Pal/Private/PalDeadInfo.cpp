#include "PalDeadInfo.h"

FPalDeadInfo::FPalDeadInfo() {
    this->LastDamage = 0;
    this->LastAttacker = NULL;
    this->SelfActor = NULL;
    this->SelfDestructWaza = EPalWazaID::None;
    this->DeadType = EPalDeadType::Undefined;
}

