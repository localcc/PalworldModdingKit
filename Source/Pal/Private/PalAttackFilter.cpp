#include "PalAttackFilter.h"

UPalAttackFilter::UPalAttackFilter() {
    this->Waza = EPalWazaID::None;
    this->VelocityOwner = EPalBlowVelocityOwner::HitComponent;
    this->WazaPowerRate = 1.00f;
    this->Attacker = NULL;
}

