#include "PalEachDamageRactionInfo.h"

FPalEachDamageRactionInfo::FPalEachDamageRactionInfo() {
    this->Attacker = NULL;
    this->IsBlow = false;
    this->IsLeanBackAnime = false;
    this->IsStan = false;
    this->WazaCategory = EPalWazaCategory::Melee;
}

