#include "PalPassiveSkillDatabaseRow.h"

FPalPassiveSkillDatabaseRow::FPalPassiveSkillDatabaseRow() {
    this->Rank = 0;
    this->LotteryWeight = 0;
    this->TargetElementType = EPalElementType::None;
    this->EffectType1 = EPalPassiveSkillEffectType::no;
    this->EffectValue1 = 0.00f;
    this->TargetType1 = EPalPassiveSkillEffectTargetType::None;
    this->EffectType2 = EPalPassiveSkillEffectType::no;
    this->EffectValue2 = 0.00f;
    this->TargetType2 = EPalPassiveSkillEffectTargetType::None;
    this->EffectType3 = EPalPassiveSkillEffectType::no;
    this->EffectValue3 = 0.00f;
    this->TargetType3 = EPalPassiveSkillEffectTargetType::None;
    this->InvokeActiveOtomo = false;
    this->InvokeWorker = false;
    this->InvokeRiding = false;
    this->InvokeReserve = false;
    this->InvokeInOtomo = false;
    this->InvokeAlways = false;
    this->InvokeInBaseCamp = false;
    this->AddPal = false;
    this->AddRarePal = false;
    this->AddShotWeapon = false;
    this->AddMeleeWeapon = false;
    this->AddArmor = false;
    this->AddAccessory = false;
}

