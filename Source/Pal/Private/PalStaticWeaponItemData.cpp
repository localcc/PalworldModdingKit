#include "PalStaticWeaponItemData.h"

UPalStaticWeaponItemData::UPalStaticWeaponItemData() {
    this->MagazineSize = 0;
    this->SneakAttackRate = 0.00f;
    this->AttackValue = 0;
    this->DefenseValue = 0;
}

int32 UPalStaticWeaponItemData::GetWeaponDefense() const {
    return 0;
}

int32 UPalStaticWeaponItemData::GetWeaponBaseDamage() const {
    return 0;
}

float UPalStaticWeaponItemData::GetSneakAttackRate() const {
    return 0.0f;
}

int32 UPalStaticWeaponItemData::GetMaxMagazineSize() const {
    return 0;
}


