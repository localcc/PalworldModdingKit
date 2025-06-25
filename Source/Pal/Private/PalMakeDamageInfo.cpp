#include "PalMakeDamageInfo.h"

FPalMakeDamageInfo::FPalMakeDamageInfo() {
    this->Attacker = NULL;
    this->Defender = NULL;
    this->HitComponent = NULL;
    this->Power = 0;
    this->Category = EPalWazaCategory::Melee;
    this->Element = EPalElementType::None;
    this->AttackType = EPalAttackType::Waza;
    this->WeaponType = EPalWeaponType::None;
    this->IsLeanBack = false;
    this->IsBlow = false;
    this->EffectType1 = EPalAdditionalEffectType::None;
    this->EffectValue1 = 0;
    this->EffectValueEx1 = 0.00f;
    this->EffectType2 = EPalAdditionalEffectType::None;
    this->EffectValue2 = 0;
    this->EffectValueEx2 = 0.00f;
    this->SneakAttackRate = 0.00f;
    this->DamageRatePerCollision = 0.00f;
    this->DamageReactionAnimationType = EPalDamageAnimationReactionType::None;
    this->bAttackableToFriend = false;
    this->NoDamage = false;
    this->IgnoreShield = false;
    this->UIDamageTextOverride_DoubleRegist = false;
    this->CameraShake = EPalPlayerDamageCameraShakeCategory::None;
    this->ForceRagdollSize = EPalSizeType::None;
    this->OverrideNetworkOwner = NULL;
    this->WeaponDamageRatePvP = 0.00f;
}

