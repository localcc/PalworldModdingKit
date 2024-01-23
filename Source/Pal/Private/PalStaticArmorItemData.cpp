#include "PalStaticArmorItemData.h"

int32 UPalStaticArmorItemData::GetShieldValue() const {
    return 0;
}

int32 UPalStaticArmorItemData::GetHPValue() const {
    return 0;
}

int32 UPalStaticArmorItemData::GetDefenseValue() const {
    return 0;
}

int32 UPalStaticArmorItemData::GetAttackValue() const {
    return 0;
}

UPalStaticArmorItemData::UPalStaticArmorItemData() {
    this->AttackValue = 0;
    this->DefenseValue = 0;
    this->HPValue = 0;
    this->ShieldValue = 0;
}

