#include "PalMonsterWeaponFilter.h"

UPalMonsterWeaponFilter::UPalMonsterWeaponFilter() {
    this->Element = EPalElementType::None;
    this->BlowSpeed = 0.00f;
    this->BlowUpRate = 0.00f;
    this->IsBlow = false;
    this->Attacker = NULL;
}


