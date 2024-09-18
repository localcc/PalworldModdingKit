#include "PalDamageInfo.h"

FPalDamageInfo::FPalDamageInfo() {
    this->NativeDamageValue = 0;
    this->Category = EPalWazaCategory::Melee;
    this->IsBlowAttack = false;
    this->IsLeanBack = false;
    this->BodyPartsType = EPalBodyPartsType::Weak;
    this->AttackerLevel = 0;
    this->AttackElementType = EPalElementType::None;
    this->Attacker = NULL;
    this->OverrideNetworkOwner = NULL;
    this->AttackType = EPalAttackType::Waza;
    this->WeaponType = EPalWeaponType::None;
    this->EffectType1 = EPalAdditionalEffectType::None;
    this->EffectValue1 = 0;
    this->EffectValueEx1 = 0.00f;
    this->EffectType2 = EPalAdditionalEffectType::None;
    this->EffectValue2 = 0;
    this->EffectValueEx2 = 0.00f;
    this->SneakAttackRate = 0.00f;
    this->PlaySneakAttackEffect = false;
    this->DamageRatePerCollision = 0.00f;
    this->DamageReactionAnimationType = EPalDamageAnimationReactionType::None;
    this->bAttackableToFriend = false;
    this->NoDamage = false;
    this->IgnoreShield = false;
    this->UIDamageTextOverride_DoubleRegist = false;
    this->CameraShake = EPalPlayerDamageCameraShakeCategory::None;
    this->ForceRagdollSize = EPalSizeType::None;
    this->bApplyNativeDamageValue = false;
    this->IgnorePlayerEquipItemDamage = false;
}

