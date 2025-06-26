#include "PalWazaDatabaseRaw.h"

FPalWazaDatabaseRaw::FPalWazaDatabaseRaw() {
    this->WazaType = EPalWazaID::None;
    this->Element = EPalElementType::None;
    this->IgnoreRandomInherit = false;
    this->Category = EPalWazaCategory::Melee;
    this->Power = 0;
    this->IsLeanBack = false;
    this->CameraShake = EPalPlayerDamageCameraShakeCategory::None;
    this->IgnoreRaycast = false;
    this->MinRange = 0;
    this->MaxRange = 0;
    this->CoolTime = 0.00f;
    this->ForceRagdollSize = EPalSizeType::None;
    this->EffectType1 = EPalAdditionalEffectType::None;
    this->EffectValue1 = 0;
    this->EffectValueEx1 = 0.00f;
    this->EffectType2 = EPalAdditionalEffectType::None;
    this->EffectValue2 = 0;
    this->EffectValueEx2 = 0.00f;
    this->bIsWeaponDamage = false;
    this->DisabledData = false;
    this->BulletEmiiterOverlapClass = NULL;
}

