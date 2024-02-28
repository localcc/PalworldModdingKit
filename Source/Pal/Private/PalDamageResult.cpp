#include "PalDamageResult.h"

FPalDamageResult::FPalDamageResult() {
    this->Damage = 0;
    this->Attacker = NULL;
    this->Defender = NULL;
    this->DamageReactionAnimationType = EPalDamageAnimationReactionType::None;
    this->IgnoreShield = false;
    this->IsPlayedLeanBack = false;
    this->CameraShake = EPalPlayerDamageCameraShakeCategory::None;
    this->IgnorePlayerEquipItemDamage = false;
    this->AttackElementType = EPalElementType::None;
}

